#include <stdio.h>
#include <pthread.h>
#include <unistd.h> // for sleep function
volatile int shared_variable = 0;
void *thread_function(void *arg) {
    int thread_id = *((int *)arg);
    for (int i = 0; i < 5; ++i) {
        shared_variable++; // Increment shared variable
        printf("Thread %d: shared_variable = %d\n", thread_id, shared_variable);
        sleep(1);
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[2]; 
    int thread_ids[2] = {1, 2};
    for (int i = 0; i < 2; ++i) {
        pthread_create(&threads[i], NULL, thread_function, (void *)&thread_ids[i]);
    }
    for (int i = 0; i < 2; ++i) {
        pthread_join(threads[i], NULL);
    }
    return 0;
}

