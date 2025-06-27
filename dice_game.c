#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> 

int main(void) {
    char name[100];      // ← 追加

    // 1) 名前を尋ねる（追加）
    printf("What is your name?\n> ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        fprintf(stderr, "Error reading name.\n");
        return 1;
    }
    name[strcspn(name, "\n")] = '\0';

    // 2) 挨拶（追加）
    printf("Hello, %s!\n\n", name);




int main(void) {
    srand((unsigned)time(NULL));
    printf("Rolling dice...\n");
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int total = die1 + die2;
    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", total);
    if (total > 7) {
        printf("You won!\n");
    } else {
        printf("You lost!\n");
    }



    printf("Die 1: %d\nDie 2: %d\nTotal value: %d\n", die1, die2, total);
    return 0;
}