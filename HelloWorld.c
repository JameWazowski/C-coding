#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));

    for (int i = 0; i < 100; i++) {
        int number = (rand() % 100) + 1;
        
        printf("%d\n", number);
    }

    return 0;
}