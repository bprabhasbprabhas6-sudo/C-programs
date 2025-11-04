#include <stdio.h>
#include <math.h>
int main() {
    double base, exponent, result;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exponent);
    result = pow(base, exponent);
    printf("%.2lf^%.2lf = %.2lf\n", base, exponent, result);
    return 0;
}