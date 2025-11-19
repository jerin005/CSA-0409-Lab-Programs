#include <stdio.h>
int main(){
    int b[10],p[10],m,n,i,j,best;
    printf("Blocks: "); scanf("%d",&m);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    printf("Processes: "); scanf("%d",&n);
    for(i=0;i<n;i++){ scanf("%d",&p[i]); best=-1;
        for(j=0;j<m;j++)
            if(b[j]>=p[i]&&(best==-1||b[j]<b[best])) best=j;
        if(best!=-1){ printf("P%d -> B%d\n",i+1,best+1); b[best]-=p[i]; }
        else printf("P%d -> Wait\n",i+1);
    }
}

