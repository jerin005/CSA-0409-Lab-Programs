#include <stdio.h>
int main(){
    int n=3,m=3,i,j,k,alloc[3][3]={{0,1,0},{2,0,0},{3,0,2}},
    max[3][3]={{7,5,3},{3,2,2},{9,0,2}},avail[3]={3,3,2},f[3]={0},ans[3],ind=0;
    int need[3][3]; for(i=0;i<n;i++) for(j=0;j<m;j++) need[i][j]=max[i][j]-alloc[i][j];
    for(k=0;k<3;k++) for(i=0;i<n;i++) if(!f[i]){
        int flag=0; for(j=0;j<m;j++) if(need[i][j]>avail[j]) flag=1;
        if(!flag){ for(j=0;j<m;j++) avail[j]+=alloc[i][j]; ans[ind++]=i; f[i]=1; }
    }
    printf("Safe Sequence: "); for(i=0;i<n;i++) printf("P%d ",ans[i]);
}

