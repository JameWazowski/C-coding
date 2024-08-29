#include <stdio.h>

int main(){

    char name[25];
    int age;

    printf("\nWhat\'s your name? ");
    // scanf("%s", &name);
    fgets(name, 25, stdin); // stdin for standard input. fgets() automaticaly add new line!!!

    printf("How old are you? ");
    scanf("%d", &age);

    printf("Hi, %s. You are %d years old", name, age);

    return 0;
}