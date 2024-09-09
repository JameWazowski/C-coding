#include <stdio.h>
#include <stdbool.h>

void array_of_drinks(int drinks[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Order %i: \t%i drinks\n", i+1, drinks[i]);
        printf("Order %i: \t%i drinks\n\n", i+1, *(drinks + i));
    }
}

void pointers_of_drinks(int drinks[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Order %i: \t%p address\n", i+1, &drinks[i]);
        printf("Order %i: \t%p address\n\n", i+1, drinks + i);
    }
}

int main() {
    int drinks[] = {4, 2, 3};

    printf("========================================\n");

    printf("1st order: %i drinks\n", drinks[0]);
    printf("1st order: %i drinks\n", *drinks);

    printf("========================================\n");

    printf("Pointer of drinks is \t%p\n", &drinks);
    printf("Pointer of drinks[0] is %p\n", &drinks[0]);
    printf("Pointer of *drinks is \t%p\n", &(*drinks));

    printf("========================================\n");

    printf("True is equal  %i\n", true);
    printf("False is equal %i\n", false);

    printf("========================================\n");

    printf("drinks[0] == *drinks - %d\n", drinks[0] == *drinks);

    printf("========================================\n");

    printf("3rd order: %i drinks\n", drinks[2]);
    printf("3rd order: %i drinks\n", *(drinks + 2));

    printf("========================================\n");

    int drinks_for_function[] = {13, 45, 88, 34, 85, 92, 7, 33, 108, 27};
    int size = sizeof(drinks_for_function) / sizeof(int);
    
    printf("\n==Array_of_drinks() function==\n");
    array_of_drinks(drinks_for_function, size);

    printf("\n=Pointers_of_drinks() function=\n");
    pointers_of_drinks(drinks_for_function, size);

    return 0;
}