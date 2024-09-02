#include <stdio.h>

// arrays

int main() {

    double prices1[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    printf("First array\n");
    printf("-----------\n");

    printf("First price  - $%.2lf\n", prices1[0]);
    printf("Second price - $%.2lf\n", prices1[1]);
    printf("Third price  - $%.2lf\n", prices1[2]);
    printf("Fourth price - $%.2lf\n", prices1[3]);
    printf("Fifth price  - $%.2lf\n\n", prices1[4]);

    double prices2[5];

    prices2[0] = 10.0;
    prices2[1] = 20.0;
    prices2[2] = 30.0;
    prices2[3] = 50.0;
    prices2[4] = 40.0;

    printf("Second array\n");
    printf("------------\n");

    printf("First price  - $%.2lf\n", prices2[0]);
    printf("Second price - $%.2lf\n", prices2[1]);
    printf("Third price  - $%.2lf\n", prices2[2]);
    printf("Fourth price - $%.2lf\n", prices2[3]);
    printf("Fifth price  - $%.2lf\n\n", prices2[4]);

    return 0;
}