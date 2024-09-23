#include <stdio.h>

typedef struct island {
    char *name;
    char *opens;
    char *closes;
    struct island *next; // pointer that points to the next element 
} island;

int main() {

    island amity = {"Amity", "09:00", "17:00", NULL};
    island craggy = {"Craggy", "09:00", "17:00", NULL};
    island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
    island shutter = {"Shutter", "09:00", "17:00", NULL};

    // Connecting structs together in linked list
    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &shutter;

    printf("Linked List\n");
    printf("%s island is allocated at \t\t%p\n", amity.name, &amity);
    printf("%s island is allocated at \t\t%p\n", craggy.name, &craggy);
    printf("%s island is allocated at \t%p\n", isla_nublar.name, &isla_nublar);
    printf("%s island is allocated at \t\t%p\n", shutter.name, &shutter);

    return 0;
}