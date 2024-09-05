#include <stdio.h>

int main() {

    double a = 'X';
    double b = 'Y';
    double c = 'Z';

    printf("SIZES\n");
    printf("a = %d bytes\n", sizeof(a));
    printf("b = %d bytes\n", sizeof(b));
    printf("c = %d bytes\n\n", sizeof(c));

    printf("ADDRESSES\n");
    printf("a = %p\n", &a);
    printf("b = %p\n", &b);
    printf("c = %p\n", &c);


    printf("ARRAY OF DOUBLES\n");
    double d;
    double e[10];
    printf("size of type double = %d;\naddress of double variable = %p\n", sizeof(double), &d);
    printf("size of array of doubles = %d;\naddress of array of doubles = %p", sizeof(e), &e);

    return 0;
}