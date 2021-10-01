#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char *getOption(int option) {
    switch(option) {
        case 0:
            return "rock";
        break;
        case 1:
            return "paper";
        break;
        case 2:
            return "scissors";
        break;
    }
    return NULL;
}

int main(void) {
    srand(time(NULL)); // Seed the random number generator with the system's current time_t value
    int machine = rand() % 3; // Generated a random number between 0 and 2
    int human;

    if(machine > 2) {
        machine = 0;
    }

    printf("Write 1 for Rock, 2 for Paper and 3 for Scissors\n");
    scanf("%d", &human);

    human--; // This is so the computer can read the human input as 0, 1, 2

    int result = (3 + machine - human) % 3;

    /* 
        Explanation of the algorithm:

        In rock-paper-scissors, each elements defeats the preceding one.
    */

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