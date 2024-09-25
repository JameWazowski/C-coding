#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island {
    char *name;
    char *opens;
    char *closes;
    struct island *p_next;
} island;

island* create(char *);
void display(island *);
    
int main() {
    island *start = NULL;
    island *i = NULL;
    island *next = NULL;
    char name[80];
    
    for (; fgets(name, 80, stdin) != NULL; i = next) {
        next = create(name);
        if (start == NULL)
            start = next;
        if (i != NULL)
            i->p_next = next;
    }
    display(start);
}

island* create(char *name) {
    island *i = malloc(sizeof(island));
    i->name = strdup(name);
    i->opens = "09:00";
    i->closes = "17:00";
    i->p_next = NULL;
}

void display(island *start) {
    island *i = start;

    for (; i != NULL; i = i->p_next)
        printf("Island %s\n%s-%s\n\n", i->name, i->opens, i->closes);
}