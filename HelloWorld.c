#include <stdio.h>

int main(){

    // %c - character
    // %s - string (array of characters)
    // %f - float
    // %lf - double
    // d - integer

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%9.2f\n", item1);
    printf("Item 2: $%9.2f\n", item2);
    printf("Item 3: $%9.2f\n", item3);

    return 0;
}