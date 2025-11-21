#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, head, move=0;
    printf("numRequests: ");
    if(scanf("%d",&n)!=1) return 0;
    int req[50];
    printf("requests: ");
    for(i=0;i<n;i++) scanf("%d",&req[i]);
    printf("head: ");
    scanf("%d",&head);
    for(i=0;i<n;i++){ move += abs(req[i]-head); head = req[i]; }
    printf("Total Head Movement = %d\n", move);
    return 0;
}

