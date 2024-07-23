#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define BCKGRD_COL_CUSTOM_RED   "\e[48;2;200;0;0m"
enum GameState {
    START,
    GUESS,
    WIN,
    LOSE
};

int main() {
    enum GameState state = START;
    int number_to_guess, guess, num_attempts = 1;
    srand(time(NULL));

    while (1) {
        switch (state) {
            case START:
                printf("Welcome to the Number Guessing Game!\n");
                number_to_guess = rand() % 100 + 1;  
                printf("A random number between 1 and 100 has been chosen.\n");
                state = GUESS;
                break;
	GUESS:
            case GUESS:
                printf("Enter your guess: ");
                if (scanf("%d", &guess) != 1) {
                    printf("Invalid input. Please enter a number.\n");
                    while(getchar() != '\n');
                    goto GUESS;
                }
		if(num_attempts >= 10){
		goto lose;
		}
                num_attempts++;
                if (guess == number_to_guess) {
                    printf( "Congratulations! You guessed the number in %d attempts.\n",num_attempts );
                    state = WIN;
                } else if (guess < number_to_guess) {
                    printf("Too low. Try again!\n");
                } else {
                    printf("Too high. Try again!\n");
                }
                break;
            case WIN:
		printf("\033]11;#000FFF\007");
		sleep(5);
		printf("\033]11;#000000\007");
                printf("Do you want to play again? (1 for yes, 0 for no): ");
                if (scanf("%d", &guess) != 1) {
                    printf("Invalid input. Exiting game.\n");
                    state = LOSE;
                    break;
                }
                if (guess == 1) {
                    state = START;
                    num_attempts = 0;
                } else {
                    state = LOSE;
                }
                break;
            case LOSE:
                printf("Thanks for playing!\n");
                return 0;
		lose:
		printf("you lost the game");
		return 0;
        }
    }
    return 0;
}

