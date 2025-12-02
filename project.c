#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, random;
    int no_of_attempts = 0;

    srand(time(0));
    random = rand() % 100 + 1;

    printf("=== Welcome to the Number Guessing Game! ===\n");

    do {
        printf("-> Enter your guess (1-100): ");
        scanf("%d", &guess);
        no_of_attempts++;

        if (guess > random) {
            printf("Too high! Try again. :)\n");
        }
        else if (guess < random) {
            printf("Too low! Try again. :)\n");
        }
        else {
            printf("Congratulations!!! :D\n");
            printf("You guessed the number %d in %d attempts!\n",
                   random, no_of_attempts);
        }

    } while (guess != random);

    printf("\nThanks for playing! Goodbye! :)\n");
    printf("Made By: Himanshu\n");

    printf("\nPress Enter to exit...");
    while (getchar() != '\n');
    getchar();

    return 0;
}