#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 2; i <= n; i += 2)
        sum += i;
    printf("Sum of even numbers up to %d = %d\n", n, sum);
    return 0;
}