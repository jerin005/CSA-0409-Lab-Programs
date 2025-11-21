#include <stdio.h>
#define F 3

int main(){
    int pages[] = {7,0,1,2,0,3,0,4,2,3,0,3,2};
    int n = sizeof(pages)/sizeof(pages[0]);
    int frames[F] = {-1,-1,-1}, time[F] = {0}, clk=0;
    int faults=0,i,j,hit,pos;

    for(i=0;i<n;i++){
        hit=0;
        for(j=0;j<F;j++){
            if(frames[j]==pages[i]){ hit=1; time[j]=++clk; }
        }
        if(!hit){
            pos=0;
            for(j=1;j<F;j++) if(time[j]<time[pos]) pos=j;
            frames[pos]=pages[i];
            time[pos]=++clk;
            faults++;
        }
        for(j=0;j<F;j++) printf("%2d ", frames[j]);
        printf("\n");
    }
    printf("Total Page Faults = %d\n", faults);
    return 0;
}

