#include <stdio.h>
#include <string.h>

void print_reverse(char *);

int main() {

    char word[] = "Hello";
    print_reverse(word);

    return 0;
}

void print_reverse(char *s) {
    size_t len = strlen(s); // 5
    char *t = s + len - 1; // *t = 'O'; it's a pointer for the last letter s[4]

    while (t >= s) {
        printf("%c", *t);
        t = t - 1;
    } 
}