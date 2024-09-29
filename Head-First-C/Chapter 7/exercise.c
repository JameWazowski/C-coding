#include <stdio.h>
#include <stdarg.h>

enum drink {
    MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE
};

double price(enum drink);
double total(int, ...);

int main() {

    printf("Summary = %.2lf\n", total(4, price(MUDSLIDE), price(FUZZY_NAVEL), price(MONKEY_GLAND), price(ZOMBIE)));

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

    for (i = 0; i < args; i++)
        total += va_arg(drink_list, double);

    va_end(drink_list);

    return total;
}