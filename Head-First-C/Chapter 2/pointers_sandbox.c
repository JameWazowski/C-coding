#include <stdio.h>

int main() {

    char first_name[20];
    char last_name[20];
    printf("Enter your first and last name: ");
    scanf("%19s %19s", first_name, last_name);

    int age;
    printf("Enter your age: ");
    scanf("%i", &age);

    printf("\nYour name is %s %s\n", first_name, last_name);
    printf("Your age is %i\n", age);

    printf("\nAddress of first_name array is %p\n", &first_name);
    printf("Address of  last_name array is %p\n", &last_name);
    printf("Address of              age is %p\n", &age);

    printf("\nSize of first_name is %i\n", sizeof(first_name));
    printf("Size of  last_name is %i\n", sizeof(last_name));

    return 0;
}