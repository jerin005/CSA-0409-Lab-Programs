#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t w,mutex; int rc=0,data=0;

void* reader(void* a){
    for(int i=0;i<3;i++){
        sem_wait(&mutex); rc++; if(rc==1) sem_wait(&w); sem_post(&mutex);
        printf("Reader reads %d\n",data);
        sem_wait(&mutex); rc--; if(rc==0) sem_post(&w); sem_post(&mutex); sleep(1);
    } return NULL;
}

void* writer(void* a){
    for(int i=0;i<3;i++){
        sem_wait(&w); data++; printf("Writer writes %d\n",data); sem_post(&w); sleep(1);
    } return NULL;
}

int main(){
    pthread_t r,wrt; sem_init(&w,0,1); sem_init(&mutex,0,1);
    pthread_create(&r,NULL,reader,NULL); pthread_create(&wrt,NULL,writer,NULL);
    pthread_join(r,NULL); pthread_join(wrt,NULL);
}

