#include <stdio.h>

int main() {

    short a = 15;
    int b = a;
    printf("The value of b = %i\n\n", a);

    int x = 100000;
    short y = x;
    printf("The value of y = %i\n\n", y);

    int c = 7;
    int d = 2;
    float e = c / d;
    printf("e = %f\n\n", e);

    int f = 7;
    int g = 2;
    float h = (float)f / (float)g;
    printf("h = %f\n\n", h);

    int i = 7;
    int j = 2;
    float k = (float)i / j;
    printf("k = %f\n\n", k);

    // Working with "unsigned" and "long" keywords
    int in = 1000000000000000;
    long long int lli = 1000000000000000;
    
    printf("Working with LONG\n");
    printf("in = %i\n", i);         // Warning (overflow); value in console was 7
    printf("lli = %lli\n", lli);    // Doesn't have any problems

    int l = -19;
    unsigned int un_int = l;
    printf("\nWorking with UNSIGNED\n");
    printf("l = %i\n", l);
    printf("un_int = %u\n", un_int); // Display a value 4294967277

    return 0;
}