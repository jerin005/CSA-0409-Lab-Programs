#include <stdio.h>
struct Emp{int id;char name[20];float sal;};
int main(){
    FILE *f; struct Emp e; int c;
    f=fopen("emp.dat","rb+"); if(!f) f=fopen("emp.dat","wb+");
    while(1){
        printf("\n1.Add 2.View 3.Exit: "); scanf("%d",&c);
        if(c==1){ printf("ID Name Sal: "); scanf("%d%s%f",&e.id,e.name,&e.sal);
            fseek(f,(e.id-1)*sizeof(e),SEEK_SET); fwrite(&e,sizeof(e),1,f); }
        else if(c==2){ printf("Enter ID: "); scanf("%d",&e.id);
            fseek(f,(e.id-1)*sizeof(e),SEEK_SET); fread(&e,sizeof(e),1,f);
            printf("%d %s %.2f\n",e.id,e.name,e.sal); }
        else break;
    }
    fclose(f);
}

