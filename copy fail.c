#include <stdio.h>
int main() {
    FILE *f1, *f2;
    char ch;
    f1 = fopen("input.txt", "r");
    f2 = fopen("copy.txt", "w");
    if(f1 == NULL || f2 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while((ch = fgetc(f1)) != EOF)
        fputc(ch, f2);
    fclose(f1);
    fclose(f2);
    printf("File copied to copy.txt\n");
    return 0;
}