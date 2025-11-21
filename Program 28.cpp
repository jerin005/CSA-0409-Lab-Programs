/* Readers-Writers simulation for Dev-C++
   Simulates readers and writers using counters (no real concurrency).
*/
#include <stdio.h>

int main() {
    int readers = 3, writers = 2;
    int i;

    printf("Simulation start\n\n");

    // First all readers read
    for(i=1;i<=readers;i++)
        printf("Reader %d starts reading\n", i);

    for(i=1;i<=readers;i++)
        printf("Reader %d finishes reading\n", i);

    // Then writers write one by one
    for(i=1;i<=writers;i++) {
        printf("Writer %d starts writing\n", i);
        printf("Writer %d finishes writing\n", i);
    }

    printf("\nSimulation end\n");
    return 0;
}

