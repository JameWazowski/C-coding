#include <stdio.h>

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
};

void catalog(struct fish f) {
    printf("%s is a %s with %i. He is %i\n", f.name, f.species, f.teeth, f.age);
}

void label(struct fish f) {
    printf("Name: %s\nSpecies: %s\nTeeth: %i\nAge: %i\n", f.name, f.species, f.teeth, f.age);
}

int main() {

    struct fish snappy = {"Snappy", "Piranha", 69, 4}; 
    catalog(snappy);
    label(snappy);

    puts("");
    struct fish gnasher = snappy;
    catalog(gnasher);
    label(gnasher);

    printf("Address of Snappy name - \t\t\t%p\nAddress of Gnasher name - \t\t\t%p\n\n", snappy.name, gnasher.name);

    gnasher.name = "Gnasher";

    printf("The address of snappy.name (%s) - \t\t%p\n", snappy.name, snappy.name);
    printf("The address of gnasher.name (%s) - \t%p\n\n", gnasher.name, gnasher.name);

    printf("Age of %s is %i at address %p\n", snappy.name, snappy.age, &snappy.age);
    printf("Age of %s is %i at address %p\n\n", gnasher.name, gnasher.age, &gnasher.age);

    printf("Size of Snappy struct is  %i\n", sizeof(snappy));
    printf("Size of Gnasher struct is %i\n", sizeof(gnasher));

    return 0;
}