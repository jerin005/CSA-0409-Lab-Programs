#include <stdio.h>
#include <stdlib.h>

void sort(int a[], int n, int asc){
    for(int i=0;i<n-1;i++)
      for(int j=i+1;j<n;j++)
        if((asc && a[i]>a[j]) || (!asc && a[i]<a[j])){ int t=a[i]; a[i]=a[j]; a[j]=t; }
}

int main(){
    int n, i, head, move=0;
    int req[50], left[50], right[50], l=0, r=0;
    printf("numRequests: "); if(scanf("%d",&n)!=1) return 0;
    printf("requests: ");
    for(i=0;i<n;i++) scanf("%d",&req[i]);
    printf("head: "); scanf("%d",&head);

    for(i=0;i<n;i++) (req[i]<head)? left[l++]=req[i] : right[r++]=req[i];
    sort(left,l,0); sort(right,r,1);
    for(i=0;i<r;i++){ move += abs(head-right[i]); head = right[i]; }
    move += abs(head-199); head = 199;
    for(i=0;i<l;i++){ move += abs(head-left[i]); head = left[i]; }
    printf("Total Head Movement = %d\n", move);
    return 0;
}

