#include <stdio.h>

int main(){
    int start, length, i;
    printf("Enter start and length: ");
    if(scanf("%d %d",&start,&length)!=2) return 0;
    printf("Allocated blocks: ");
    for(i=start;i<start+length;i++) printf("%d ", i);
    printf("\n");
    return 0;
}

