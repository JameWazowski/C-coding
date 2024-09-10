#include <stdio.h>

int main() {

    char food[10];
    printf("Enter favorite food: ");
    
    fgets(food, sizeof(food), stdin); // More safety than scanf()

    printf("Favorite food: %s\n", food);

    for(int i = 0; i < sizeof(food); i++) {
        printf("Element %i (%c) is allocated in %p\n", i+1, food[i], &food[i]);
    }

    return 0;
}