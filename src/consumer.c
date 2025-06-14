#include <zephyr/kernel.h> 
#include "consumer.h" 
 
void consumerThread(void* inMsgQueue, void*, void*){ 
 uint32_t data = 0; 
 
 while (1) { 
        struct k_msgq *notifyMsgQueue = (struct k_msgq*)inMsgQueue;
        k_msgq_get(notifyMsgQueue, &data, K_FOREVER);
        printf("Consumer Thread: %d\n", data);
    } 
}