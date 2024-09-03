#include <stdio.h>

void sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {

        }
    }
}

int main() {
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);

    printf("Sizes in bytes\n");
    printf("==============\n");
    printf("sizeof(array) = %d\n", sizeof(array));
    printf("sizeof(array[0]) = %d\n", sizeof(array[0]));

    printf("Array before sorting - ");

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");



    return 0;
}