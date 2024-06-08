// Excercise: Number Guess Game v1

// import libraries
#include <stdio.h>              /* standard in/out library */
#include <stdlib.h>             /* standard library */

// ---MAIN DRIVER --- //
int main() {

    printf("--------------- NUMBER GUESS GAME ---------------\n");
    printf("\nGuess the integer number between 1 and 100.\n");
    int number = rand() % 100;  /* generate random number between 1 and 100 */
    int guess;

    // prompt user for first guess
    printf("Enter a guess: ");
    scanf("%d",&guess);

    // execute continued guessing
    while (guess != number) {

        if (guess < number) {

            printf("\nWRONG! Your number is too low...try again: ");
            scanf("%d",&guess);

        } else if (guess > number) {

            printf("\nWRONG! Your number is too high...try again: ");
            scanf("%d",&guess);

        }
    }

    printf("\nYOU WIN!\n");
    printf("-------------------------------------------------\n");

    return 0;
}