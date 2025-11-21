#include <stdio.h>
#define N 1000
int mem[N];

void init() { for(int i=0;i<N;i++) mem[i] = -1; }

void worstFit(int pid,int size){
    int bestStart=-1, bestSize=0;
    for(int i=0;i<N;){
        if(mem[i]==-1){
            int s=i;
            while(i<N && mem[i]==-1) i++;
            int block=i-s;
            if(block>=size && block>bestSize){
                bestSize=block; bestStart=s;
            }
        } else i++;
    }
    if(bestStart==-1){ printf("Allocation failed\n"); return; }
    for(int i=bestStart;i<bestStart+size;i++) mem[i]=pid;
    printf("P%d allocated at %d-%d\n",pid,bestStart,bestStart+size-1);
}

int main(){
    init();
    worstFit(1,200);
    worstFit(2,300);
    worstFit(3,400);
}

