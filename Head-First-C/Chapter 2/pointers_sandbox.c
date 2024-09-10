#include <stdio.h>

int main() {

    int doses[] = {1, 3, 2, 1000};
    printf("Issue dose %i\n", 3[doses]);

    int result = 0;

    if (doses[3] == *(doses + 3)) {
        printf("doses[3] == *(doses + 3)\n");
        result += 1;
    } else {
        printf("doses[3] != *(doses + 3)\n");
    }

    if (*(doses + 3) == *(3 + doses)) {
        printf("*(doses + 3) == *(3 + doses)\n");
        result += 2;
    } else {
        printf("*(doses + 3) != *(3 + doses)\n");
    }

    if (*(3 + doses) == 3[doses]) {
        printf("*(3 + doses) == 3[doses]\n");
        result += 4;
    } else {
        printf("*(3 + doses) != 3[doses]\n");
    }

    printf("\nRESULTS\n");
    switch(result){
        case 0:
            printf("All conditions are false\n");
            break;
        case 1:
            printf("Only the first condition is true\n");
            break;
        case 2:
            printf("Only the second condition is true\n");
            break;
        case 3:
            printf("The first and the second conditions are true\n");
            break;
        case 4:
            printf("Only the third condition is true\n");
            break;
        case 5:
            printf("The first and the third conditions are true\n");
            break;
        case 6:
            printf("The second and the third conditions are true\n");
            break;
        case 7:
            printf("All conditions are true\n");
            printf("So, doses[3] == *(doses + 3) == *(3 + doses) == 3[doses]\n");
            break;
        default:
            printf("Unpredictable error\n");
    }
    return 0;
}