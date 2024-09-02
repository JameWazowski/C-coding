#include <stdio.h>

int main() {

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

    printf("\nSize of array - %d bytes.\n", sizeof(prices));

    printf("Price array - ");
    for (int i = 0; i < sizeof(prices)/sizeof(double); i++) {
        printf("$%.2lf ", prices[i]);
    }

    return 0;
}