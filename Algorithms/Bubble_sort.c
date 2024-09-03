#include <stdio.h>

void bubble_sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void reversed_bubble_sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] < array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
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
    printf("====================\n\n");

    printf("Array before sorting\t - ");

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("Array after sorting\t - ");
    bubble_sort(array, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("Reverse sorting\t\t - ");
    reversed_bubble_sort(array, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}