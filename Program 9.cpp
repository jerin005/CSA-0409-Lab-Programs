#include <stdio.h>
#include <windows.h>
int main() {
    HANDLE hMap = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, 256, "MySharedMemory");
    if (hMap == NULL) {
        printf("Unable to create shared memory.\n");
        return 1;
    }
    char *shared = (char*) MapViewOfFile(hMap, FILE_MAP_ALL_ACCESS, 0, 0, 256);
    if (shared == NULL) {
        printf("Unable to map shared memory.\n");
        CloseHandle(hMap);
        return 1;
    }
    sprintf(shared, "Hello from Parent Process");
    printf("Parent wrote: %s\n", shared);
    printf("Child reads : %s\n", shared);
    UnmapViewOfFile(shared);
    CloseHandle(hMap);
    system("pause");
    return 0;
}

