#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>

int main(){
    struct stat st;
    stat("a.txt",&st);
    printf("Size = %ld bytes\n",st.st_size);

    DIR *d = opendir(".");
    struct dirent *x;
    while((x=readdir(d)))
        printf("%s\n",x->d_name);
}

