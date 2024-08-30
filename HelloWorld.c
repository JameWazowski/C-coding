#include <stdio.h>

int main() {
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    // Instead of this:
    /*if(grade == 'A') {
        printf("Perfect!\n");
    } else if (grade == 'B') {
        printf("You did good!\n");
    } else if (grade == 'C') {
        printf("You did okay\n");
    } else if (grade == 'D') {
        printf("At least it\'s not an F\n");
    } else if (grade == 'F') {
        printf("YOU FAILED\n");
    } else {
        printf("That\'s not a valid grade\n");
    }*/

    // We can use switch (test for equality against many cases)
    switch(grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay\n");
            break;
        case 'D':
            printf("At least it\'s not an F\n");
            break;
        case 'F':
            printf("YOU FAILED\n");
            break;
        default:
            printf("That\'s not a valid grade\n");
    }
}