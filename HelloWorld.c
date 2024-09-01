#include <stdio.h>

void hello(char[], int); // Function prototype

int main() {

    char name[15];
    int age;

    printf("Please enter your name: ");
    scanf("%s", &name);
    printf("Please enter your age: ");
    scanf("%d", &age);

    hello(name, age);

    return 0;
}

void hello(char name[], int age) {
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}