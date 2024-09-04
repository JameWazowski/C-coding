#include <stdio.h>

int main() {

    // & = AND
    // | = OR
    // ^ = XOR
    // <<  left shift
    // >> right shift

    int x = 6;  //  6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  //  0 = 00000000

    printf("SIMPLE EXAMPLES:\n");
    z = x & y;
    printf("x & y = %d\n", z);

    z = x | y;
    printf("x | y = %d\n", z);

    z = x ^ y;
    printf("x ^ y = %d\n", z);

    z = x << 1;
    printf("%d = x << 1\n", z);

    z = x >> 1;
    printf("%d = x >> 1\n", z);

    z = y << 1;
    printf("%d = y << 1\n", z);

    z = y >> 1;
    printf("%d = y >> 1\n", z);

    printf("\nLEFT SHIFT (MULTIPLICATION):\n");
    int a = 5;
    int b = 0;
    printf("Our a = %d, b = %d\n", a, b);
    for (int i = 0; i < 10; i++) {
        b = a << i;
        printf("%d = a << %d\t\n", b, i);
    }

    printf("\nRIGHT SHIFT (DIVISION):\n");
    int c = 10000;
    int d = 0;
    printf("Our c = %d, d = %d\n", c, d);
    for (int i = 0; i < 10; i++) {
        d = c >> i;
        printf("%d = c >> %d\n", d, i);
    }
    return 0;
}