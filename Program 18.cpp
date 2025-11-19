#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

int buf=0; sem_t full,empty;

void* prod(void* a){
    for(int i=1;i<=5;i++){
        sem_wait(&empty); buf=i; printf("Produced %d\n",i);
        sem_post(&full); sleep(1);
    } return NULL;
}
void* cons(void* a){
    for(int i=1;i<=5;i++){
        sem_wait(&full); printf("Consumed %d\n",buf);
        sem_post(&empty); sleep(1);
    } return NULL;
}
int main(){
    pthread_t p,c; sem_init(&full,0,0); sem_init(&empty,0,1);
    pthread_create(&p,NULL,prod,NULL); pthread_create(&c,NULL,cons,NULL);
    pthread_join(p,NULL); pthread_join(c,NULL);
}

