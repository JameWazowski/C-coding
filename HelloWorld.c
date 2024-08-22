#include <stdio.h>
#include <stdbool.h> // For working with bool

int main() {

    char a = 'C'; // %c
    char b[] = "Jame"; // &s

    float c = 3.141592653589793; // %f
    double d = 3.141592653589793; // %lf

    bool e = true; // %d

    char f = 100; // %c or %d
    unsigned char g = 255; // %c or %d

    printf("Char f is %c and char g is %c", f,  g);

    short int h = 32767; // %d
    unsigned short int  i = 65535; // %d

    int j = 2147483647; // %d
    unsigned int k = 4294967295L; // %u

    long long int l = 9223372036854775807; // %lld
    unsigned long long int m = 18446744073709551615U; // %llu

    // Output in console

    printf("%c\n", a); //char A
    printf("%s\n", b); // char b[]
    printf("%0.15f\n", c); // float c
    printf("%0.15lf\n", d); // double d
    printf("%d\n", e); // bool e
    printf("%c (output like char) or %d (output like int)\n", f, f); // char f
    printf("%c (output like char) or %d (output like int)\n", g, g); // unsigned char g
    printf("%d\n", h); // short int h
    printf("%d\n", i); // unsigned short int i
    printf("%d\n", j); // int j
    printf("%u\n", k); // unsigned int k
    printf("%lld\n", l); // long long int l
    printf("%llu\n", m); // unsigned long long int m
}