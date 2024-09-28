#include <stdio.h>
#include <stdlib.h>

int compare_nums(const void*, const void *);

int main() {

    int num_sequence[] = {3254, 23415, 15211, 24154, 1423564, 413634, 1346, 1345, 2354, 45, 9596, 123, 653};
    size_t quantity = sizeof(num_sequence) / sizeof(num_sequence[0]);
    
    qsort(num_sequence, quantity, sizeof(int), compare_nums);
    
    puts("Make an order:");
    for (int i = 0; i < quantity; i++) {
        printf("%i\n", num_sequence[i]);
    }

    return 0;
}

int compare_nums(const void* a_num, const void* b_num) {
    int a = *(int*)a_num;
    int b = *(int*)b_num;
    return a - b;
}