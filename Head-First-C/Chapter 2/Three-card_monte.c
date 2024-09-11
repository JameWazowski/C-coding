#include <stdio.h>

int main() {

    // char *cards = "JQK";

    char cards[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    
    for (int i = 0; i < 3; i++)
        printf("%c\n", cards[i]);

    return 0;
}

// This code does not have any output because the string can't be updated