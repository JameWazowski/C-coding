#include <stdio.h>

enum response_type {DUMP, SECOND_CHANCE, MARRIAGE, DIVORCE};
typedef struct {
    char *name;
    enum response_type type;
} response;

void dump(response);
void second_chance(response);
void marriage(response);
void divorce(response);
char* enum_converter_from_value_to_name(enum response_type);

void (*replies[])(response) = {dump, second_chance, marriage, divorce};

int main() {
    
    response r[] = {
        {"Mike", DUMP}, {"Luis", SECOND_CHANCE}, 
        {"Matt", SECOND_CHANCE}, {"William", MARRIAGE},
        {"Kenny", DIVORCE}, {"Bob", DIVORCE}
    };
    size_t r_length = sizeof(r)/sizeof(r[0]);

    // Display entire struct element
    puts("List:");
    for (int i = 0; i < r_length; i++) {
        printf("Name = %s, Marital Status = %s\n", r[i].name, enum_converter_from_value_to_name(r[i].type));
    }
    puts("==================================================");

    puts("Sizes:");
    printf("sizeof(r) = %i\n", sizeof(r));
    printf("sizeof(r[0]) = %i\n", sizeof(r[0]));
    printf("size_t r_length = %i\n", r_length);
    puts("==================================================");

    for (int i = 0; i < r_length; i++)
        (replies[r[i].type])(r[i]);

    return 0;
}

void dump(response r) {
    printf("Dear %s,\n", r.name);
    puts("Unfortunately your last date contacted us to");
    puts("say that they will not be seeing you again\n");
}

void second_chance(response r) {
    printf("Dear %s,\n", r.name);
    puts("Good news: your last date has asked us to");
    puts("arrange another meeting. Please call ASAP.\n");
}

void marriage(response r) {
    printf("Dear %s,\n", r.name);
    puts("Congratulations! Your last date has contacted");
    puts("us with a proposal of marriage.\n");
}

void divorce(response r) {
    printf("Dear %s,\n", r.name);
    puts("Your wife wanna go away from you");
    puts("Bye!\n");
}

char* enum_converter_from_value_to_name(enum response_type r_type) {
    switch(r_type) {
        case DUMP: return "DUMP";
        case SECOND_CHANCE: return "SECOND_CHANCE";
        case MARRIAGE: return "MARRIAGE";
        case DIVORCE: return "DIVORCE";
        default: return "Unknown error";
    }
}