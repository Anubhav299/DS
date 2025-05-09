#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(NULL));
    
    // Generate random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_guess = 0;
    int guessed;

    do
    {

        printf("Guess the number : ");
        scanf("%d",&guessed);
        no_guess ++ ;
        if(guessed > random_number)
        {
            printf("Lower Number !!\n");
        }
        else 
        if(guessed < random_number)
        {
            printf("Higher Number !!\n");
        }
        //else 
        // printf("You guessed the number in %d guesses",no_guess);

    } while (guessed!=random_number);
        
    printf("You guessed the number in %d guesses",no_guess);
    return 0;
}
