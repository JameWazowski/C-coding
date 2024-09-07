#include <stdio.h>

int main() {

    // First Task
    int x = 0;
    int y = 0;
    printf("\nFirst result - "); // 00 11 21 32 42
    while (x < 5) {
        
        y = x - y;

        printf("%i%i ", x, y);
        x = x + 1;
    }
    
    // Second Task
    x = 0;
    y = 0;
    printf("\nSecond result - "); // 00 11 23 36 410
    while (x < 5) {
        
        y = y + x;

        printf("%i%i ", x, y);
        x = x + 1;
    }

    // Third Task
    x = 0;
    y = 0;
    printf("\nThird result - "); // 02 14 25 36 47
    while (x < 5) {
        
        y = y + 2;
        if (y > 4)
            y = y - 1;

        printf("%i%i ", x, y);
        x = x + 1;
    }

    // Fourth Task
    x = 0;
    y = 0;
    printf("\nFourth result - "); // 11 34 59
    while (x < 5) {
        
        x = x + 1;
        y = y + x;

        printf("%i%i ", x, y);
        x = x + 1;
    }

    // Fifth Task
    x = 0;
    y = 0;
    printf("\nFifth result - "); // 02 14 36 48
    while (x < 5) {
        
        if (y < 5) {
            x = x + 1;
            if (x < 3) 
                x = x - 1;
        }
        y = y + 2;

        printf("%i%i ", x, y);
        x = x + 1;
    }

    return 0;
}