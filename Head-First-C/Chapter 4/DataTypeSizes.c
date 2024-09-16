#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    
    puts("");

    printf("The value of CHAR_MAX is %i\n", CHAR_MAX);
    printf("The value of CHAR_MIN is %i\n", CHAR_MIN);
    printf("A char takes %i bytes\n\n", sizeof(char));

    printf("The value of SHRT_MAX is %i\n", SHRT_MAX);
    printf("The value of SHRT_MIN is %i\n", SHRT_MIN);
    printf("A short takes %i bytes\n\n", sizeof(short));

    printf("The value of INT_MAX is %i\n", INT_MAX);
    printf("The value of INT_MIN is %i\n", INT_MIN);
    printf("An int takes %i bytes\n\n", sizeof(int));

    printf("The value of LONG_MAX is %li\n", LONG_MAX);
    printf("The value of LONG_MIN is %li\n", LONG_MIN);
    printf("A long takes %i bytes\n\n", sizeof(long));

    printf("The value of LONG_LONG_MAX is %lli\n", LONG_LONG_MAX);
    printf("The value of LONG_LONG_MIN is %lli\n", LONG_LONG_MIN);
    printf("A long long takes %i bytes\n\n", sizeof(long long));

    printf("The value of FLT_MAX is %f\n", FLT_MAX);
    printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
    printf("A float takes %i bytes\n\n", sizeof(float));

    printf("The value of DBL_MAX is %lf\n", DBL_MAX);
    printf("The value of DBL_MIN is %lf\n", DBL_MIN);
    printf("A double takes %i bytes\n\n", sizeof(double));

    return 0;
}