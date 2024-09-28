#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_nums(const void*, const void *);
int compare_animals(const void* first_animal, const void* second_animal);

int main() {

    int num_sequence[] = {3254, 23415, 15211, 24154, 1423564, 413634, 1346, 1345, 2354, 45, 9596, 123, 653};
    size_t quantity = sizeof(num_sequence) / sizeof(num_sequence[0]);
    
    qsort(num_sequence, quantity, sizeof(int), compare_nums);
    
    puts("Make an order:");
    for (int i = 0; i < quantity; i++) {
        printf("%i\n", num_sequence[i]);
    }

    puts("--------------------------------------------------");

    char *animals[] = {"Lion", "Zebra", "Elephant", "Shark", "Ant", "Bee"};
    size_t q = 6;

    qsort(animals, q, sizeof(char*), compare_animals);

    puts("Make an animal order:");
    for (int i = 0; i < q; i++)
        printf("%s\n", animals[i]);

    return 0;
}

int compare_nums(const void* a_num, const void* b_num) {
    int a = *(int*)a_num;
    int b = *(int*)b_num;
    return a - b;
}

int compare_animals(const void* first_animal, const void* second_animal) {
    char** anim_one = (char**)first_animal;
    char** anim_two = (char**)second_animal;
    return strcmp(*anim_one, *anim_two);
}