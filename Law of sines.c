#include <math.h>
#include <stdio.h>


int main() {
  const double PI = 3.14159265;

  double a, b, alpha, c, beta, gamma;

  printf("Enter the length of side A: ");
  scanf("%lf", &a);

  printf("Enter the length of side B: ");
  scanf("%lf", &b);

  printf("Enter the measure of angle alpha in degrees: ");
  scanf("%lf", &alpha);

  alpha = alpha * PI / 180;
  beta = asin(b / a * sin(alpha));
  gamma = PI - alpha - beta;
  c = (b / sin(beta)) * sin(gamma);

  printf("\nResults:\n");
  printf("Side A: %.2lf\n", a);
  printf("Side B: %.2lf\n", b);
  printf("Side C: %.2lf\n", c);
  printf("Angle Alpha: %.2lf degrees\n", alpha * 180 / PI);
  printf("Angle Beta: %.2lf degrees\n", beta * 180 / PI);
  printf("Angle Gamma: %.2lf degrees\n", gamma * 180 / PI);

  return 0;
}
