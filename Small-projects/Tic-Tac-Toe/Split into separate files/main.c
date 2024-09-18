#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "playfuncs.h"

int main() {

    char winner = ' ';
    char response;

    do {
        winner = ' ';
        response = ' ';
        resetBoard();

        while(winner == ' ' && checkFreeSpaces() != 0) {
            printBoard();

            playerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0) {
                break;
            }

            computerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0) {
                break;
            }
        }

        printBoard();
        printWinner(winner);

        printf("Would you like to play again? (Y/N): ");
        scanf("%*c");
        scanf("%c", &response);
        response = toupper(response);
    } while (response == 'Y');

    printf("Thanks for playing!");

    return 0;
}