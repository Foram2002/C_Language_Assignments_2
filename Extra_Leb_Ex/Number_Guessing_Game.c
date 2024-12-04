//
#include <stdio.h>


int main() {
    int random_number, user_guess;
    int attempts = 0;

    srand(time(0));
    random_number = rand() % 100 + 1;

    printf("\n\n\t Welcome to the Number Guessing Game!");
    printf(" \n\n\t I have generated a random number between 1 and 100.");
    printf("\n\n\t Try to guess the number.");

    do {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);

        attempts++;

        if (user_guess > random_number) 
		{
            printf("\n\n\t Too high! Try again.\n");
        } else if (user_guess < random_number) {
            printf("\n\n\t Too low! Try again.");
        } else {
            printf("\n\n\t Congratulations! You guessed the number in %d attempts.", attempts);
        }
    } while (user_guess != random_number);
}

