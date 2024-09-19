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

void output_about_fish_first_task(struct fish f) {
    // printf("Name: %s\nSpecies: %s\nFood ingredients: %s\nFood weight: %.1f lbs\nExcercise description: %s\nExersice duration %.1f hours\n", f.name, f.species, f.care.food.ingredients, f.care.food.weight, f.care.exercise.decription, f.care.exercise.duration);

    printf("First exercise:\n");
    printf("Name: %s\n", f.name);
    printf("Species: %s\n", f.species);
    printf("Food ingredients: %s\n", f.care.food.ingredients);
    printf("Food weight: %.1f lbs\n", f.care.food.weight);
    printf("Exercise decription: %s\n", f.care.exercise.decription);
    printf("Exercise duration %.1f hours\n\n", f.care.exercise.duration);
}

void label(struct fish a) { // Second task
    printf("Second exercise:\n");
    printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n", a.name, a.species, a.age, a.teeth);
    printf("Feed with %.2f lbs of %s and allow to %s for %.2f hours\n\n", a.care.food.weight, a.care.food.ingredients, a.care.exercise.decription, a.care.exercise.duration);
}

int main() {
    
    struct fish snappy = {"Snappy", "Piranha", 69, 4, {{"meat", 0.2}, {"swim in the jacuzzi", 7.5}}};
    output_about_fish_first_task(snappy);
    label(snappy);

    return 0;
}