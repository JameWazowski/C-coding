#include <stdio.h>
#include <stdbool.h>

int main() {

    float temp = 25;
    bool sunny = false;

    // Logical 0perator AND &&

    printf("This is a result of logical operator AND");
    if (temp >= 0 && temp <= 30 && sunny) {
        printf("\nThe weather is good!\n\n");
    } else {
        printf("\nThe weather is bad!\n\n");
    }

    // Logical Operator OR ||
    printf("This is a result of logical operator OR");
    if (temp <= 0 || temp >= 30) {
        printf("\nThe weather is bad!\n\n");
    } else {
        printf("\nThe weather is good!\n\n");
    }

    // Logical Operator NOT !
    bool rainy = true;
    printf("This is a result of logical operator NOT");
    if (!rainy) {
        printf("\nIt\'s rainy outside!\n\n");
    } else {
        printf("\nIt\'s sunny outside!\n\n");
    }

    return 0;
}