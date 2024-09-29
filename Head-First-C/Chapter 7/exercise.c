#include <stdio.h>
#include <stdarg.h>

enum drink {
    MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE
};

double price(enum drink);
double total(int, ...);

int main() {

    printf("Summary of 1 = %.2lf\n", total(4, MUDSLIDE));
    printf("Summary of 2 = %.2lf\n", total(4, MUDSLIDE, FUZZY_NAVEL));
    printf("Summary of 3 = %.2lf\n", total(4, MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND));
    printf("Summary of 4 = %.2lf\n", total(4, MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE));

    return 0;
}

double price(enum drink d) {
    switch(d){
        case MUDSLIDE: return 6.79;
        case FUZZY_NAVEL: return 5.31;
        case MONKEY_GLAND: return 4.82;
        case ZOMBIE: return 5.89;
    }
    return 0;
}

double total(int args, ...) {
    double total = 0;

    va_list drink_list;
    va_start(drink_list, args);
    int i;

    for (i = 0; i < args; i++) {
        enum drink d = va_arg(drink_list, enum drink);
        total += price(d);
    }

    va_end(drink_list);

    return total;
}