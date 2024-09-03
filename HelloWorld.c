#include <stdio.h>
#include <string.h>

struct Student {
    char name[12];
    float gpa;
};

int main() {

    struct Student student1 = {"Alice", 3.0};
    struct Student student2 = {"Bob", 2.5};
    struct Student student3 = {"Eva", 3.5};
    struct Student student4 = {"Jame", 4.0};

    struct Student students[] = {student1, student2, student3, student4};

    printf("\nsizeof(students) = %d\n", sizeof(students));
    printf("sizeof(students[0]) = %d\n", sizeof(students[0]));
    printf("So, quantity of array elements = %d\n", sizeof(students)/sizeof(students[0]));
    printf("==================================\n");

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {
        printf("Student %d\t-\t%s\t-\t%.2f\n", i+1, students[i].name, students[i].gpa);
    }

    printf("\n");

    return 0;
}