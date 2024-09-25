#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island {
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

island* create(char *);
void display(island *);
void release(island *);
void elements_allocation(island *);

int main() {
    char name[80];

    printf("Please, enter the first Island\'s name: ");
    fgets(name, 80, stdin);
    island *p_island0 = create(name);

    printf("Please, enter the second Island\'s name: ");
    fgets(name, 80, stdin);
    island *p_island1 = create(name);
    
    p_island0->next = p_island1;

    display(p_island0);

    elements_allocation(p_island0);
    elements_allocation(p_island1);

    release(p_island0);

    return 0;
}

island* create(char *name) {
    island *i = malloc(sizeof(island));
    i->name = strdup(name);
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;

    return i;
}

void display(island *start) {
    island *i = start;

    for (; i != NULL; i = i->next) {
        printf("Name: %sOpens: %s\nCloses: %s\n", i->name, i->opens, i->closes);
        printf("Island have his address - %p\n", i);
        printf("Island have an address to the next address - ");

        if (i->next != NULL)
            printf("%p\n\n", i->next);
        else
            printf("NONE\n\n");
    }     
}

// Function for free dynamic memory
void release(island *start) {
    island *i = start;
    island *next = NULL;

    for (; i != NULL; i = next) {
        next = i->next;
        free(i->name); // Free the name string that was created with strdup()
        free(i);
    }
}

// Function for display location of each element
void elements_allocation(island *island_struct) {
    printf("\nName (%s) is allocated at %p\n", island_struct->name, island_struct->name);
    printf("Opens (%s) is allocated at %p\n", island_struct->opens, island_struct->opens);
    printf("Closes (%s) is allocated at %p\n", island_struct->closes, island_struct->closes);
    
    if (island_struct->next != NULL)
        printf("Address to the next struct (%p) is allocated at %p\n", island_struct->next, &island_struct->next);
}