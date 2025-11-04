#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int count = 1;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n')
            count++;
    }
    printf("Number of words = %d\n", count);
    return 0;
}