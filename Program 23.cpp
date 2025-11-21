#include <stdio.h>
#define N 1000
int mem[N];

void init(){ for(int i=0;i<N;i++) mem[i]=-1; }

void firstFit(int pid,int size){
    for(int i=0;i<N;){
        if(mem[i]==-1){
            int s=i;
            while(i<N && mem[i]==-1) i++;
            if(i-s>=size){
                for(int j=s;j<s+size;j++) mem[j]=pid;
                printf("P%d allocated at %d-%d\n",pid,s,s+size-1);
                return;
            }
        } else i++;
    }
    printf("Allocation failed\n");
}

int main(){
    init();
    firstFit(1,200);
    firstFit(2,300);
    firstFit(3,400);
}

