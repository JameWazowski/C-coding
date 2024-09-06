#include <stdio.h>

int main() {
    int decks;
    puts("Enter the number of decks: ");
    scanf("%i", &decks);
    if (decks < 1) {
        puts("You entered an invalid number of decks!");
        return 1;
    }

    printf("Total number of cards is %i\n", decks*52);

    return 0;
}