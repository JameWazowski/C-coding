#include <stdio.h>

typedef struct {
    const char *name;
    const char *species;
    int age;
} turtle;

void happy_birthday(turtle t) {
    t.age = t.age + 1;
    printf("This is a result from happy_birthday function:\n");
    printf("Happy Birthday %s! You are now %i years old!\n\n", t.name, t.age);
}

void pointer_happy_birthday(turtle *t) {
    t->age = t->age + 1;
    printf("This is a result from pointer_happy_birthday function:\n");
    printf("Happy Birthday %s! You are now %i years old!\n\n", t->name, t->age);
}

int main() {

    turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
    happy_birthday(myrtle);

    printf("%s\'s age is now %i\n\n", myrtle.name, myrtle.age);

    pointer_happy_birthday(&myrtle);

    printf("%s\'s age is now %i\n", myrtle.name, myrtle.age);

    return 0;
}