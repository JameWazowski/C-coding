#include <stdio.h>

int main() {

    // continue;
    printf("Continue: ");
    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    // break;
    printf("Break:    ");
    for (int i = 1; i <= 20; i++) {
        if (i == 13){
            break;
        }
        printf("%d ", i);
    }

    return 0;
}