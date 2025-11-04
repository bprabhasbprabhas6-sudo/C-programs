#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a > b)
        printf("%d is Maximum and %d is Minimum\n", a, b);
    else
        printf("%d is Maximum and %d is Minimum\n", b, a);
    return 0;
}