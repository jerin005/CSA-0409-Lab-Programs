#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    int fd = creat("a.txt",0777);
    write(fd,"Hello\n",6);
    close(fd);

    char buf[20];
    fd = open("a.txt",O_RDONLY);
    read(fd,buf,20);
    printf("%s",buf);
    close(fd);
}

