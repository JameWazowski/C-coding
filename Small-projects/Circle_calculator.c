#include <stdio.h>

int main() {

  const double PI = 3.14159;
  double radius;
  double circumference;
  double area;

  printf("Enter the radius of a circle: ");
  scanf_s("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * radius * radius;

  printf("\nCircumferense of the circle with radius %lf is %lf", radius, circumference);
  printf("\nArea of the circle with radius %lf is %lf\n", radius, area);

  return 0;
}