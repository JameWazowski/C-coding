#include <stdio.h>

void printAge(int age) {
    printf("You are %d years old\n", age);
}

void printWithPointerAge(int *pAge) {
    printf("You are %d years old\n", *pAge);
}

int main() {
    // Advantages of using pointers:
    // 1. Less time in program execution
    // 2. Working on the original variable
    // 3. With the help of pointers, we can create data structures (linked-list, stack, queue)
    // 4. Returning more than one values from functions
    // 5. Searching and sorting large data very easily
    // 6. Dynamically memory allocation

    int age = 21;
    int *pAge = NULL; // good practice to assign NULL if declaring a pointer
    pAge = &age;

    printf("\naddress of age:  %p\n", &age);
    printf("value of pAge:   %p\n\n", pAge);

    printf("value of age:    %d\n", age);
    printf("value at stored address (from pAge): %d\n\n", *pAge);

    printf("Size of variable age:  %d bytes\n", sizeof(age));
    printf("Size of variable pAge: %d bytes\n", sizeof(pAge));

    printf("\nWORKING WITH FUNCTIONS\n");
    printAge(age);
    printWithPointerAge(pAge);

    printf("\n");
    
    return 0;
}