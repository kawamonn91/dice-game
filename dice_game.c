// dice_game.c
// A simple dice game in C with user greeting and win/loss message.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
    char name[100];

    // Ask for user's name
    printf("What is your name?\n> ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        fprintf(stderr, "Error reading name.\n");
        return 1;
    }
    // Remove trailing newline, if any
    name[strcspn(name, "\n")] = '\0';

    // Greet the user
    printf("Hello, %s!\n", name);

    // Seed random-number generator and roll dice
    srand((unsigned)time(NULL));
    printf("Rolling dice...\n");
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int total = die1 + die2;

    // Show results
    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", total);

    // Win/loss message
    if (total > 7) {
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }

    return 0;
}