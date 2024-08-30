#include <stdio.h>
#include <math.h> // For math functions

int main() {

  double A = sqrt(9);
  double B = pow(2, 4);
  int C = round(3.14);
  int D = ceil(3.14);
  int E = floor(3.99);
  double F = fabs(-100);
  double G = log(3);
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);

  printf("Sqrt(9) = %lf\n", A); // 3.000000
  printf("Pow(2, 4) = %lf\n", B); // 16.000000
  printf("Round(3.14) = %d\n", C); // 3
  printf("Ceil(3.14) = %d\n", D); // 4
  printf("Floor(3.99) = %d\n", E); // 3
  printf("Fabs(-100) = %lf\n", F); // 100.000000
  printf("Log(3) = %lf\n", G); // 1.098612
  printf("Sin(45) = %lf\n", H); // 0.850904
  printf("Cos(45) = %lf\n", I); // 0.525322
  printf("Tan(45) = %lf\n", J); // 1.619775

  return 0;
}