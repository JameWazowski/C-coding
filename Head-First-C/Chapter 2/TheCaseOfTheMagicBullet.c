#include <stdio.h>

void dead(char *exist) {
    exist[0] = 'D';
    exist[1] = 'E';
    exist[2] = 'A';
    exist[3] = 'D';
    exist[4] = '!';
}

int main() {

    char masked_raider[] = "Alive";
    char *jimmy = masked_raider;

    printf("Masked raider is %s, Jimmy is %s\n", masked_raider, jimmy);

    dead(masked_raider);

    printf("Masked raider is %s, Jimmy is %s\n", masked_raider, jimmy);

    return 0;
}