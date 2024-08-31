#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("Choose temperature in (C) or (F): ");
    scanf_s("%c", &unit);

    unit = toupper(unit); 

    if(unit == 'C') {
        printf("From C to F");
        printf("\nEnter the temp in Celsius: ");
        scanf_s("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in Farenheit is %.2f", temp);
    } else if (unit == 'F') {
        printf("From F to C");
        printf("\nEnter the temp in Farenheit: ");
        scanf_s("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature in Celsius is %.2f", temp);
    } else {
        printf("\n%c is not a valid unit of measurement", unit);
    }

    return 0;

}