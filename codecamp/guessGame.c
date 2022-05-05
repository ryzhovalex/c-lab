#include <stdio.h>
#include <stdlib.h>


int main() {
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    
    while (guess != secretNumber && guessCount < guessLimit) {
        guessCount++;
        printf("Attempt: %d. Enter a number: ", guessCount);
        scanf("%d", &guess);
    }
    if (guess == secretNumber) {
        printf("You win!\n");
        return 0;
    } else {
        printf("Out of guesses!\n");
        return 0;
    }
}