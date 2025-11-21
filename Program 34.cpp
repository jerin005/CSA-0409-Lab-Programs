#include <stdio.h>

int main(){
    int indexBlock, n, i, blocks[20];
    printf("Index block and number of file blocks: ");
    if(scanf("%d %d",&indexBlock,&n)!=2) return 0;
    printf("Enter blocks: ");
    for(i=0;i<n;i++) scanf("%d",&blocks[i]);
    printf("Index = %d\nBlocks: ", indexBlock);
    for(i=0;i<n;i++) printf("%d ", blocks[i]);
    printf("\n");
    return 0;
}

