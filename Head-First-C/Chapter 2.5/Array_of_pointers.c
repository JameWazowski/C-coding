#include <stdio.h>
#include <string.h>

void array_of_pointers();

int main() {

    array_of_pointers();

    return 0;
}

void array_of_pointers() {
    char *names_for_dog[] = {"Bowser", "Bonza", "Snodgrass"};
    size_t len = sizeof(names_for_dog) / sizeof(names_for_dog[0]);

    printf("\nNumber of elements: %i\n\n", len);
    for (int i = 0; i < len; i++){
        printf("Element %i: %s,\t(size: %i)\taddress: %p\n", i+1, names_for_dog[i], names_for_dog[i], &names_for_dog[i]);
    }
    
}