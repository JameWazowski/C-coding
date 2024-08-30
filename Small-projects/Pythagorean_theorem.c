#include <stdio.h>
#include <math.h>

int main() {

  double A;
  double B;
  double C;

  printf("Enter A: ");
  scanf_s("%lf", &A);
  printf("Enter B: ");
  scanf_s("%lf", &B);

  C = sqrt(pow(A, 2) + pow(B, 2));

  printf("C is %.3lf", C);


  return 0;
}