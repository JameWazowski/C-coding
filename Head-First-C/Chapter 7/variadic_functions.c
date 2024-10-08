#include <stdio.h>
#include <stdarg.h>

void print_ints(int, ...);

int main() {

    print_ints(4, 65, 67, 78, 87);

    return 0;
}

void print_ints(int args, ...) {
    va_list ap;
    va_start(ap, args);
    int i;

    for (i = 0; i < args; i++)
        printf("argument: %i\n", va_arg(ap, int));

    va_end(ap);
}