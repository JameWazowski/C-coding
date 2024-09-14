#include <stdio.h>

int main() {
    char word[10];
    int i = 0;
    while (scanf("%9s", word) == 1) {
        i = i + 1;
        if (i % 2)
            fprintf(stdout, "%s ", word);
        else
            fprintf(stderr, "%s ", word);
    }
    return 0;
}


// Running in cmd with commands 
// 1 - "gcc TopSecret.c -o TopSecret"
// 2 - "TopSecret < secret.txt > message1.txt 2> message2.txt"