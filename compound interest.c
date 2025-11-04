#include <stdio.h>
#include <math.h>
int main() {
    float principle, rate, time, ci;
    printf("Enter principle, rate and time: ");
    scanf("%f %f %f", &principle, &rate, &time);
    ci = principle * pow((1 + rate / 100), time) - principle;
    printf("Compound Interest = %.2f\n", ci);
    return 0;
}