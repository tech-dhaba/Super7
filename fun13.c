#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int secret, number;
    int counter;
    counter = 0;
    srand(time(NULL));
    secret = rand() % 100 + 1;
    printf("Search the secret number in the interval [1,100] \n");

    do
    {
        printf("Try your luck: ");
        scanf("%d%*c", &number);
        counter++;
        if (number > secret)
            printf("Your guess was too high!\n");
        if (number < secret)
            printf("Your guess was too low!\n");
    } while (number != secret);
    printf("\nYou needed %d guesses to find the secret number!\n", counter);
    return 0;
}

