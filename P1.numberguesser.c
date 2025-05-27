#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;
    srand(time(0)); //Avoid the same algorithm to generate a random number generator
    number = rand() % 100 + 1;  //Generates a number between 1 and 100

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number)
        {
            printf("Please enter a smaller number\n");
        }
        else if (guess < number)
        {
            printf("Please enter a bigger number\n");
        }
        else
        {
            printf("Congrats! you have correctly guessed the number! in %d attempts\n", attempts);
        }
    } 
    while (guess != number);
    return 0;
}