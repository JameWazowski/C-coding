#include <stdio.h>

int main() {

    int rows;
    int columns;
    char symbol;

    printf("Enter symbol to use: ");
    scanf("%c", &symbol);

    printf("Enter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns:");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}