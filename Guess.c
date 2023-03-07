#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    int guess = 0;
    int randomNumber = 0;
    int Numberofguesses;

    time_t t;

    srand((unsigned) time(&t));

    randomNumber = rand() % 21;

    printf("Welcome to the guessing Game!");
    printf("\nHello! I'm choosen number between 0 to 20, Now its your turn to guess the right number what i choosed.\n");

    for(Numberofguesses = 5; Numberofguesses > 0; --Numberofguesses)
    {
        printf("\nYou  have %d  tr%s left ",Numberofguesses, Numberofguesses == 1 ? "y":"ies");
        printf("Enter a Guessing number:");
        scanf("%d", &guess);

        if(guess == randomNumber)
        {
            printf("\nCongratulations! You Guessed correct Number! You rocked it bro.\n");
            break;

        }
        else if(guess < 0 || guess > 20)
            printf("Its an invalid Number i said choose number between 0 to 20");
        else if(guess > randomNumber)
            printf("Your guess is greater than my choosen Number", guess);
        else if(guess < randomNumber)
            printf("Your guess is lower than my choosen Number",guess);
    }
     printf("\nYour guess is wrong. The number is %d\n",randomNumber);
        

    
    return 0;

}