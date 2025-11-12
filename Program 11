#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int i;
void* task1(void* arg) {
    for (i = 0; i < 5; i++) {
        printf("Task 1 is running (iteration %d)\n", i + 1);
        sleep(1);
    }
    return NULL;
}
void* task2(void* arg) {
    for (i = 0; i < 5; i++) {
        printf("Task 2 is running (iteration %d)\n", i + 1);
        sleep(1);
    }
    return NULL;
}

int main() {
    pthread_t t1, t2;

    printf("Main: Creating threads...\n");

    pthread_create(&t1, NULL, task1, NULL);
    pthread_create(&t2, NULL, task2, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Main: Both threads have finished execution.\n");

    return 0;
}

