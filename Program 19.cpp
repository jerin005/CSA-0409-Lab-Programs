#include <stdio.h>
#include <pthread.h>
pthread_mutex_t m; int c=0;

void* fun(void* a){
    for(int i=0;i<100000;i++){
        pthread_mutex_lock(&m);
        c++;
        pthread_mutex_unlock(&m);
    }
    return NULL;
}
int main(){
    pthread_t t1,t2;
    pthread_mutex_init(&m,NULL);
    pthread_create(&t1,NULL,fun,NULL);
    pthread_create(&t2,NULL,fun,NULL);
    pthread_join(t1,NULL); pthread_join(t2,NULL);
    printf("Final Counter: %d\n",c);
}

