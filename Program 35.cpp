#include <stdio.h>

int main(){
    int start, n, i;
    printf("Enter start block and count: ");
    if(scanf("%d %d",&start,&n)!=2) return 0;
    for(i=0;i<n;i++) printf("%d -> ", start+i);
    printf("NULL\n");
    return 0;
}

