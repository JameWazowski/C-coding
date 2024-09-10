#include <stdio.h>

void skip (char *msg) {
    puts(msg + 6);
}

int main() {

    char *msg_from_amy = "Don\'t call me";
    skip(msg_from_amy);

    printf("\n*msg_from_amy - %c\n", *msg_from_amy);
    printf("msg_from_amy - %s\n", msg_from_amy);
    printf("Address of msg_from_amy - %p\n", &msg_from_amy);
    
    return 0;
}