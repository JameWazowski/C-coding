#include <stdio.h>
#include <string.h>


int main() {

    // Characters swapping
    char x = 'X';
    char y = 'Y';
    char temp;

    printf("Chars swapping\n");
    printf("==============\n");
    printf("Values before swapping\n");
    printf("----------------------\n");
    printf("x = %c\n", x);
    printf("y = %c\n\n", y);

    // Swapping operations for characters
    temp = x;
    x = y;
    y = temp;

    printf("Values after swapping\n");
    printf("---------------------\n");
    printf("x = %c\n", x);
    printf("y = %c\n\n", y);

    // Strings swapping
    char a[15] = "jame";
    char b[15] = "wazowski";
    char temp_string[15];

    printf("Strings swapping\n");
    printf("================\n");
    printf("Values before swapping\n");
    printf("----------------------\n");
    printf("a[] = \"%s\"\n", a);
    printf("b[] = \"%s\"\n\n", b);

    // Swapping operations for strings
    strcpy(temp_string, a);
    strcpy(a, b);
    strcpy(b, temp_string);

    printf("Values after swaapping\n");
    printf("----------------------\n");
    printf("a[] = \"%s\"\n", a);
    printf("b[] = \"%s\"\n\n", b);

    return 0;
}