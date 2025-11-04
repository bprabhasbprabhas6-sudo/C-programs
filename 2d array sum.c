#include <stdio.h>
int main() {
    int r, c, sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter elements of array:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            sum += arr[i][j];
    printf("Sum of 2D array elements = %d\n", sum);
    return 0;
}