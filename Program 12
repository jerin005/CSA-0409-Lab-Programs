#include <stdio.h>

#define PHILOSOPHERS 5
int state[PHILOSOPHERS],i,cycle;
void dine() {
    for (i = 0; i < PHILOSOPHERS; i++) {
        state[i] = 0; // All start thinking
    }

    printf("=== Dining Philosophers Problem (Simulation) ===\n\n");

    for (cycle = 1; cycle <= 3; cycle++) {
        printf("---- Round %d ----\n", cycle);
        for (i = 0; i < PHILOSOPHERS; i++) {
            printf("Philosopher %d is thinking.\n", i + 1);
        }

        for (i = 0; i < PHILOSOPHERS; i++) {
            printf("Philosopher %d is hungry and tries to pick forks.\n", i + 1);

            // Simulate only one philosopher eating at a time to avoid deadlock
            printf("Philosopher %d picked up left and right forks and is eating.\n", i + 1);
            state[i] = 2;

            printf("Philosopher %d finished eating and put down both forks.\n\n", i + 1);
            state[i] = 0;
        }
    }

    printf("All philosophers have finished dining.\n");
}

int main() {
    dine();
    return 0;
}

