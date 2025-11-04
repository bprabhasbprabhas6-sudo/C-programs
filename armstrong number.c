#include <stdio.h>
int main() {
    int n, temp, digit, sum = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    // Count digits
    while(temp != 0) {
        count++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0) {
        digit = temp % 10;
        int pow = 1;
        for(int i = 0; i < count; i++)
            pow *= digit;
        sum += pow;
        temp /= 10;
    }
    if(sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);
    return 0;
}