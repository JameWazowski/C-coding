#include <stdio.h>
#include <string.h>

struct Player {
    char name[12];
    int score;
};

int main() {
    // struct

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Jame");
    player1.score = 8;

    strcpy(player2.name, "Wazowski");
    player2.score = 10;

    printf("Player 1\t|\t Score\n");
    printf("%s\t\t|\t    %d\n", player1.name, player1.score);
    printf("%s\t|\t   %d\n", player2.name, player2.score);

    return 0;
}