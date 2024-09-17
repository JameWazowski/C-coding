#include <stdio.h>
#include "encrypt.h"

int main() {
    char msg[80];

    printf("Please enter your message: ");
    while (fgets(msg, 80, stdin)) {
        encrypt(msg);
        printf("Your encrypted message: %s\n", msg);
        printf("Please enter your message: ");
    }

    return 0;
}

// gcc message_hider.c encrypt.c -o message_hider