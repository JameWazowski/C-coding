#include <stdio.h>

int main() {

    int numbers1[][3] = {
                       {1, 2, 3}, 
                       {4, 5, 6}
                      };

    int numbers2[3][3];

    int rows = sizeof(numbers2) / sizeof(numbers2[0]);
    int columns = sizeof(numbers2[0]) / sizeof(numbers2[0][0]);

    printf("2D Array\n");
    printf("--------\n");
    printf("sizeof(int) = %d - size of one variable with type int\n", sizeof(int));
    printf("sizeof(numbers2) = %d - size of one entire array\n", sizeof(numbers2));
    printf("sizeof(numbers2[0]) = %d - size of one row from an array\n", sizeof(numbers2[0]));
    printf("sizeof(numbers2[0][0]) = %d - size of one variable from an array\n", sizeof(numbers2[0][0]));
    printf("---------------------------------------------------------------\n");
    printf("So,\nNumber of rows: %d;\nNumber of columns: %d\n", rows, columns);
    printf("--------------------\nArray:\n");

    numbers2[0][0] = 7;
    numbers2[0][1] = 8;
    numbers2[0][2] = 9;
    numbers2[1][0] = 10;
    numbers2[1][1] = 11;
    numbers2[1][2] = 12;
    numbers2[2][0] = 13;
    numbers2[2][1] = 14;
    numbers2[2][2] = 15;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", numbers2[i][j]);
        }
        printf("\n");
    }

    return 0;
}