#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char *getOption(int option) {
    switch(option) {
        case 1:
            return "rock";
        break;
        case 2:
            return "paper";
        break;
        case 3:
            return "scissors";
        break;
    }
    return NULL;
}

int main(void) {
    srand(time(NULL));
    int machine = rand() % 2 + 1;
    int human;

    if(machine > 2) {
        machine = 0;
    }

    printf("Write 1 for Rock, 2 for Paper and 3 for Scissors\n");
    scanf("%d", &human);

    int result = machine - human;

    if(result < 0) {
        result = 2;
    }

    switch(result) {
        case 0:
            printf("Draw, machine chose %s\n", getOption(machine));
        break;
        case 1:
            printf("You lose, machine chose %s\n", getOption(machine));
        break;
        case 2:
            printf("You win, machine chose %s\n", getOption(machine));
        break;
    }

    return 0;
}