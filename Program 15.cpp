#include <stdio.h>
#include <string.h>
struct dir{ char d[10],f[10][10]; int fc; } d[5];
int main(){
    int n=0,c,i; char dn[10];
    while(1){
        printf("\n1.NewDir 2.NewFile 3.List 4.Exit: "); scanf("%d",&c);
        if(c==1){ printf("Dir name: "); scanf("%s",d[n].d); d[n].fc=0; n++; }
        else if(c==2){ printf("Dir name: "); scanf("%s",dn);
            for(i=0;i<n;i++) if(!strcmp(d[i].d,dn)){
                printf("File name: "); scanf("%s",d[i].f[d[i].fc++]); }}
        else if(c==3) for(i=0;i<n;i++){ 
            printf("\n%s:\n",d[i].d);
            for(int j=0;j<d[i].fc;j++) printf(" %s\n",d[i].f[j]); }
        else break;
    }
}

