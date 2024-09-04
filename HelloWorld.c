#include <stdio.h>

enum Day{Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7};

int main() {

    enum Day today = Wed;

    if (today == Sat || today == Sun) {
        printf("Today is Weekend!");
    } else {
        printf("I have to work today");
    }

    return 0;
}