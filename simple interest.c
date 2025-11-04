#include <stdio.h>
int main() {
    float principle, rate, time, si;
    printf("Enter principle, rate and time: ");
    scanf("%f %f %f", &principle, &rate, &time);
    si = (principle * rate * time) / 100;
    printf("Simple Interest = %.2f\n", si);
    return 0;
}