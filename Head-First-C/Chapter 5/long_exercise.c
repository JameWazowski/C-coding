#include <stdio.h>

struct exercise {
    const char *decription;
    float duration;
};

struct meal {
    const char *ingredients;
    float weight;
};

struct preferences {
    struct meal food;
    struct exercise exercise;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

void output_about_fish(struct fish f) {
    // printf("Name: %s\nSpecies: %s\nFood ingredients: %s\nFood weight: %.1f lbs\nExcercise description: %s\nExersice duration %.1f hours\n", f.name, f.species, f.care.food.ingredients, f.care.food.weight, f.care.exercise.decription, f.care.exercise.duration);

    printf("Name: %s\n", f.name);
    printf("Species: %s\n", f.species);
    printf("Food ingredients: %s\n", f.care.food.ingredients);
    printf("Food weight: %.1f lbs\n", f.care.food.weight);
    printf("Exercise decription: %s\n", f.care.exercise.decription);
    printf("Exercise duration %.1f hours\n", f.care.exercise.duration);
}

int main() {
    
    struct fish snappy = {"Snappy", "Piranha", 0, 0, {{"meat", 0.2}, {"swim in the jacuzzi", 7.5}}};
    output_about_fish(snappy);

    return 0;
}