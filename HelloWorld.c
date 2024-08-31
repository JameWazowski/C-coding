#include <stdio.h>

int findMax(int x, int y) {
    // if (x > y) {
    //     return x;
    // } else {
    //     return y;
    // }
    return (x > y) ? x : y;
}

int main() {

    int x = findMax(12, 65);
    printf("%d", x);

    return 0;
}