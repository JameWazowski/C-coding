#include <stdio.h>
#include <string.h>

int main() {

    char cars[][12] = {"Mustang", "Corvette", "Camaro"};

    printf("Sizes of everyting in program (in bytes)\n");
    printf("----------------------------------------\n");
    printf("sizeof(cars)                 = %d\n", sizeof(cars));
    printf("sizeof(cars[0])              = %d\n", sizeof(cars[0]));
    printf("sizeof(cars[1])              = %d\n", sizeof(cars[1]));
    printf("sizeof(cars[2])              = %d\n", sizeof(cars[2]));
    printf("---------------------------------\n");
    printf("sizeof(cars)/sizeof(cars[0]) = %d - number of elements in array\n", sizeof(cars)/sizeof(cars[0]));
    
    printf("\nArray without any changes\n");
    printf("-------------------------\n");
    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++) {
        printf("Car %d is %s\n", i+1, cars[i]);
    }

    printf("\nArray after change\n");
    printf("------------------\n");

    strcpy(cars[0], "Porsche");

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++) {
        printf("Car %d is %s\n", i+1, cars[i]);
    }

    printf("\n");

    return 0;
}