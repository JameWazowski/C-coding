#include <stdio.h>

typedef union {
    short count;
    float weight;
    float volume;
} quantity;

typedef struct {
    const char *name;
    const char *country;
    quantity amount;
} fruit_order;

int main() {
    
    fruit_order apples = {"apple", "England", .amount.weight=4.2f};
    printf("This order contains %.2f lbs of %s\n", apples.amount.weight, apples.name);

    return 0;
}

