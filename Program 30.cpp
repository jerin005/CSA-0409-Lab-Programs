#include <stdio.h>
#define F 3

int main() {
    int pages[] = {7,0,1,2,0,3,0,4,2,3,0,3,2};
    int n = sizeof(pages)/sizeof(pages[0]);
    int frames[F] = {-1,-1,-1}, k=0, faults=0, i,j,hit;

    for(i=0;i<n;i++){
        hit=0;
        for(j=0;j<F;j++) if(frames[j]==pages[i]) hit=1;
        if(!hit){
            frames[k]=pages[i];
            k=(k+1)%F;
            faults++;
        }
        for(j=0;j<F;j++) printf("%2d ", frames[j]);
        printf("\n");
    }
    printf("Total Page Faults = %d\n", faults);
    return 0;
}

