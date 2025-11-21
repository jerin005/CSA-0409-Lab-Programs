#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char text[100];
    char readData[100];

    fp = fopen("demo.txt", "w");
    if(fp == NULL) {
        printf("Cannot create file\n");
        return 0;
    }

    strcpy(text, "This is an example file created for OS Lab.");
    fprintf(fp, "%s", text);
    printf("File created and data written.\n");
    fclose(fp);

    // Read it back
    fp = fopen("demo.txt", "r");
    fgets(readData, 100, fp);
    printf("Data read from file: %s\n", readData);
    fclose(fp);

    return 0;
}

