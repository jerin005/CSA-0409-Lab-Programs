#include <stdio.h>
#define F 3

int main(){
    int pages[] = {7,0,1,2,0,3,0,4,2,3,0,3,2};
    int n = sizeof(pages)/sizeof(pages[0]);
    int frames[F] = {-1,-1,-1};
    int faults=0,i,j,k,pos,hit;

    for(i=0;i<n;i++){
        hit=0;
        for(j=0;j<F;j++) if(frames[j]==pages[i]) hit=1;
        if(!hit){
            pos=0; k=-1;
            for(j=0;j<F;j++){
                int found=0, nextPos;
                for(nextPos=i+1; nextPos<n; nextPos++){
                    if(frames[j]==pages[nextPos]){ found=1; break; }
                }
                if(!found){ pos=j; k=1; break; } // not used again -> choose
                if(k==-1 || nextPos>k){ k=nextPos; pos=j; }
            }
            frames[pos]=pages[i];
            faults++;
        }
        for(j=0;j<F;j++) printf("%2d ", frames[j]);
        printf("\n");
    }
    printf("Total Page Faults = %d\n", faults);
    return 0;
}

