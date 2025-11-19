#include <stdio.h>
#include <string.h>
int main(){
    char file[10][20],name[20]; int n=0,c,i;
    while(1){
        printf("\n1.Create 2.List 3.Delete 4.Exit: "); scanf("%d",&c);
        if(c==1){ printf("File name: "); scanf("%s",file[n++]); }
        else if(c==2){ for(i=0;i<n;i++) printf("%s\n",file[i]); }
        else if(c==3){ printf("Delete file: "); scanf("%s",name);
            for(i=0;i<n;i++) if(!strcmp(name,file[i])){
                for(int j=i;j<n-1;j++) strcpy(file[j],file[j+1]); n--; break; }}
        else break;
    }
}

