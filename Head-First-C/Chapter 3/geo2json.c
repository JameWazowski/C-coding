#include <stdio.h>

int main() {

    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("{");
    puts("\t\"data\": [");
    while (scanf("%f,%f,%79s[^\n", &latitude, &longitude, info) == 3) {
        if (started)
            printf(",\n");
        else 
            started = 1;
        printf("\t\t{\"latitude\": %f, \"longitude\": %f, \"info\": \"%s\"}", latitude, longitude, info);
    }

    puts("\n\t]");
    puts("}");

    return 0;
}