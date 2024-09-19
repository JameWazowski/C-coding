#include <stdio.h>

struct preferences {
    const char *food;
    float exercise_hours;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

void catalog(struct fish f) {
    printf("%s is a %s with %i. He is %i. He loves %s and work out %.1f hours per day\n", f.name, f.species, f.teeth, f.age, f.care.food, f.care.exercise_hours);
}

void label(struct fish f) {
    printf("Name: %s\nSpecies: %s\nTeeth: %i\nAge: %i\nHe loves %s and work out %.1f hours per day\n", f.name, f.species, f.teeth, f.age, f.care.food, f.care.exercise_hours);
}

int main() {

    struct fish snappy = {"Snappy", "Piranha", 69, 4, {"Meat", 7.5}}; 
    catalog(snappy);
    label(snappy);

    puts("");
    struct fish gnasher = snappy;

    gnasher.name = "Gnasher";
    gnasher.care.food = "Kelp";

    catalog(gnasher);
    label(gnasher);

    printf("\n%s at address %p\n", snappy.care.food, snappy.care.food);
    printf("%s at address %p\n", gnasher.care.food, gnasher.care.food);

    return 0;
}