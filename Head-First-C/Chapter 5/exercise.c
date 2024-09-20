#include <stdio.h>

typedef struct {
    float tank_capacity;
    int tank_psi;
    const char *suit_material;
} equipment;

typedef struct {
    const char *name;
    equipment kit;
} diver;

void badge(diver d) {
    printf("Name: %s\nTank: %.2f(%i)\nSuit: %s\n", d.name, d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material);
}

int main() {
    diver randy = {"Randy", {5.5, 3500, "Neoprene"}};
    badge(randy);

    printf("\nAddresses of struct elements: \n");
    printf("The address of %s is \t%p\n", randy.name, randy.name);
    printf("The address of %.1f is \t\t%p\n", randy.kit.tank_capacity, &randy.kit.tank_capacity);
    printf("The address of %i is \t\t%p\n", randy.kit.tank_psi, &randy.kit.tank_psi);
    printf("The address of %s is \t%p\n", randy.kit.suit_material, randy.kit.suit_material);
    // Conclusion: elements in the structure are stored relative to their data types

    const char *pName = randy.name;
    float *pTankCapacity = &randy.kit.tank_capacity;
    int *pTankPsi = &randy.kit.tank_psi;
    const char *pSuitMaterial = randy.kit.suit_material;

    printf("\nAddresses of pointers:\n");
    printf("The address of pointer %s in \t%p\n", randy.name, &pName);
    printf("The address of pointer %.1f in \t\t%p\n", randy.kit.tank_capacity, &pTankCapacity);
    printf("The address of pointer %i in \t\t%p\n", randy.kit.tank_psi, &pTankPsi);
    printf("The address of pointer %s in \t%p\n", randy.kit.suit_material, &pSuitMaterial);
    // Conclusion: pointers are stored in memory sequentially

    return 0;
}