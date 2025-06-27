#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    printf("Rolling dice...\n");
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int total = die1 + die2;
    printf("Die 1: %d\nDie 2: %d\nTotal value: %d\n", die1, die2, total);
    return 0;
}