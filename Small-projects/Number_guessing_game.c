#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(0));

    int correct_random_number = (rand() % 100) + 1;
    int user_guess;
    int number_of_guesses = 0;

    do {
        printf("Your guess: ");
        scanf("%d", &user_guess);
        number_of_guesses++;
        if (user_guess < correct_random_number) {
            printf("Too low!\n");
        } else {
            printf("Too big!\n");
        }
    } while(user_guess != correct_random_number);    
        
    printf("Yes!\n===============================\n");
    printf("Congrats! Random number was: %d\n", correct_random_number);
    printf("Number of guesses: %d\n", number_of_guesses);
    printf("===============================\n");
    
    return 0;
}