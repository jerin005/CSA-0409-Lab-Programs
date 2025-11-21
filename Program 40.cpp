#include <stdio.h>
int main(){
    char user[40], group[40];
    printf("Enter username: "); if(scanf("%s",user)!=1) return 0;
    printf("Enter group: "); if(scanf("%s",group)!=1) return 0;
    printf("User: %s\nGroup: %s\n", user, group);
    return 0;
}

