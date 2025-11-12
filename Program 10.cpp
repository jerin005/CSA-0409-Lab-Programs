#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>
#include <string.h>

struct msg_buffer {
    long msg_type;
    char msg_text[100];
};

int main() {
    struct msg_buffer message;
    key_t key;
    int msgid;

    key = ftok("progfile", 65);            
    msgid = msgget(key, 0666 | IPC_CREAT); 
    
    if (fork() == 0) {
        msgrcv(msgid, &message, sizeof(message), 1, 0);
        printf("Child received: %s\n", message.msg_text);
    } else {
        message.msg_type = 1;
        strcpy(message.msg_text, "Hello from Parent");
        msgsnd(msgid, &message, sizeof(message), 0);
        printf("Parent sent message.\n");
        sleep(1);
    }
    msgctl(msgid, IPC_RMID, NULL); 
    return 0;
}

