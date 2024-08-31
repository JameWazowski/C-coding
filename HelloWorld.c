#include <stdio.h>

void birthday(char x[], int y) {
    printf("\nHappy birthday %s!", x);
    printf("\nYou are %d years old!", y);
}

int main() {
    char name[12];
    int age;

    printf("Enter your first name: ");
    scanf_s("%s", &name);

    printf("Enter you age: ");
    scanf("%d", &age);

    birthday(name, age);

    return 0;
}