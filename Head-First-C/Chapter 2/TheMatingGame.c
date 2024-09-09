#include <stdio.h>

int main() {

    int contestants[] = {1, 2, 3};
    int *choice = contestants;

    printf("\nDisplay values of every array number before operations:\n");
    for (int i = 0; i < sizeof(contestants)/sizeof(contestants[0]); i++) {
        printf("Element %i has value %i\n", i+1, contestants[i]);
    }

    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;

    printf("\nDisplay values of every array number after operations:\n");
    for (int i = 0; i < sizeof(contestants)/sizeof(contestants[0]); i++) {
        printf("Element %i has value %i\n", i+1, contestants[i]);
    }

    printf("\nI\'m going to pick contestant number %i\n", contestants[2]);

    return 0;
}