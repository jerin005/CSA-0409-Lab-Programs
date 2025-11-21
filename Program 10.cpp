#include <stdio.h>
#include <string.h>

struct Message {
    int id;
    char text[100];
};

int main() {
    struct Message msg;

    printf("Enter Message ID: ");
    scanf("%d", &msg.id);

    printf("Enter Message Text: ");
    scanf("%s", msg.text);

    printf("\n--- Message Queue Simulation ---\n");
    printf("Message Sent to Queue\n");
    printf("ID   : %d\n", msg.id);
    printf("Text : %s\n", msg.text);

    printf("\nMessage Received from Queue\n");
    printf("ID   : %d\n", msg.id);
    printf("Text : %s\n", msg.text);

    return 0;
}

