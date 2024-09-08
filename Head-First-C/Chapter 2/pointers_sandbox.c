#include <stdio.h>

void change_value(int *pB) {
    *pB = *pB + 3;
}

int main() {

    int x = 4;
    printf("Variable x have %d value and %p address\n\n", x, &x);

    int a = 10;
    int *pointer_A = &a;
    int b = *pointer_A;
    int *pointer_B = &b;

    printf("int a = %i\nint *pointer_A = %p\nint b = %i\nint *pointer_B = %p\n", a, pointer_A, b, pointer_B);

    printf("Size of int a is %i\n", sizeof(a));
    printf("Size of int *pointer_A is %i\n", sizeof(pointer_A));
    printf("Size of int b is %i\n", sizeof(b));
    printf("Size of int *pointer_B is %i\n", sizeof(pointer_B));

    printf("\nWorking with pointer with function\n");
    change_value(pointer_B);                                // <-- Change original variable in function change_value()
    printf("Now our variable *pointer_B is %i\n", *pointer_B);
    printf("Now our variable b is %i\n", b);
    printf("Address of int b is %p\n", &b);                 // <-- The same address in output
    printf("Address of int *pointer_B %p\n", pointer_B);    // <-- The same address in output

    return 0;
}