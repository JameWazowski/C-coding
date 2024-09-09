#include <stdio.h>

int main() {

    char s[] = "How big is it?";
    char *t = s;

    printf("Size of char[] is %8d\n", sizeof(s));
    printf("Size of char *t is %7d\n", sizeof(t));

    printf("\nchar t = %17p\n", t);

    printf("&s = %21p\ns = %22p\n", &s, s);

    // The address of the s array is just s
    if (&s == s)
        printf("\t\t   &s == s\n");
    else
        printf("\t\t   &s != s\n");

    printf("\nt = %22p\n&t = %21p\n", t, &t);

    // But address of the t is not a t
    if (&t == t)
        printf("\t\t   &t == t\n");
    else
        printf("\t\t   &t != t\n");

    // We can change the adderss that pointer variable holds 
    int *ptr;
    int x = 10;
    ptr = &x;
    printf("\n(before) int ptr = %p\n", ptr);
    
    ptr = NULL;
    printf("(after)  int ptr = %p\n", ptr);

    // but we cannot change the address stored in an array variable

    return 0;
}