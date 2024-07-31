#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0)); 
    int randomNumber = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guessed;
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guessed);
        if(guessed>randomNumber){
            printf("Lower Number Please: \n");
        }
        else if(guessed<randomNumber){
            printf("Higher Number Please: \n");
        }
        else{
            printf("\nCongratulations! You guessed the number!\n");
        }
        number_of_guesses++;
    } while (guessed!=randomNumber);
    printf("You guessed the number in %d tries.\n" , number_of_guesses);
    return 0;
}