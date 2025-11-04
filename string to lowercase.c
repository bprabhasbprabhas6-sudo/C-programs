#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
    }
    printf("Lowercase: %s\n", str);
    return 0;
}