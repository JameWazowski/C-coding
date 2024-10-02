#include <stdio.h>
#include "hfcal.h"

void display_calories(float weight, float distance, float coeff) {
    printf("Weight: %.2f lbs\n", weight);
    printf("Distance: %.2f miles\n", distance);
    printf("Calories burned: %.2f cal\n", coeff);
}