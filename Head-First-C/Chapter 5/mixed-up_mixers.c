#include <stdio.h>

typedef union {
    float lemon;
    int lime_pieces;
} lemon_lime;

typedef struct {
    float tequila;
    float cointreau;
    lemon_lime citrus;
} margarita;

void first_margarita(margarita m) {
    printf("%.1f measures of tequila\n", m.tequila);
    printf("%.1f measures of cointreau\n", m.cointreau);
    printf("%.1f measures of juice\n\n", m.citrus.lemon);
}

void second_margarita(margarita m) {
    printf("%.1f measures of tequila\n", m.tequila);
    printf("%.1f measures of cointreau\n", m.cointreau);
    printf("%.1f measures of juice\n\n", m.citrus.lemon);
}

void third_margarita(margarita m) {
    printf("%.1f measures of tequila\n", m.tequila);
    printf("%.1f measures of cointreau\n", m.cointreau);
    printf("%i pieces of lime\n\n", m.citrus.lime_pieces);
}

int main() {
    margarita m1 = {2.0, 1.0, {2}};
    margarita m2 = {2.0, 1.0, {0.5}};
    margarita m3 = {2.0, 1.0, {.lime_pieces=1}};

    first_margarita(m1);
    second_margarita(m2);
    third_margarita(m3);

    return 0;
}