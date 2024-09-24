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

    free(p_island0);
    free(p_island1);

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
        printf("Island have an address to the next address - ");

        if (i->next != NULL)
            printf("%p\n\n", i->next);
        else
            printf("NONE\n\n");
    }     
}