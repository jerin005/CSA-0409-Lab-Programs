#include <stdio.h>
#include <string.h>
int main(){
    char name[64], perm[16];
    printf("Enter filename: "); if(scanf("%s",name)!=1) return 0;
    printf("Enter permission string (e.g. rwxr-xr--): "); if(scanf("%s",perm)!=1) return 0;
    printf("File: %s\nPermissions: %s\n", name, perm);
    return 0;
}
