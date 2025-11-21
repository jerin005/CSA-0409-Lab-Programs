/* Dining Philosophers simulation (no threads) */
#include <stdio.h>

int main() {
    int n = 5, i;
    printf("Dining Philosophers simulation (sequential)\n");
    for(i=0;i<n;i++) {
        printf("Philosopher %d picks left and right forks\n", i);
        printf("Philosopher %d is eating\n", i);
        printf("Philosopher %d puts down forks\n", i);
    }
    return 0;
}

