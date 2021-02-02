#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

    int numRandom = 0;
    int numGuess = 0;
    int whileLoop = 1;
    int count = 0;

    srand(time(NULL));
    numRandom = rand() % 100;

    printf("Guess my number! ");

    while (whileLoop == 1) {
        count++;

        scanf("%d", &numGuess);

        if (numGuess == numRandom) {
            printf("You win! It took you %d times to guess the number.\n", count);
            break;
        }
        if (numGuess > numRandom)
            printf("The number you've guessed is too high, please try again ");

        if (numGuess < numRandom)
            printf("The number you've guessed is too low, please try again ");


    }

    whileLoop = 0;
