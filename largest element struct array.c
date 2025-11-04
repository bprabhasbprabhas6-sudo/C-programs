#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s[3];
    for(int i = 0; i < 3; i++) {
        printf("Enter roll, name, marks for student %d: ", i+1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    printf("\nStudent Info:\n");
    for(int i = 0; i < 3; i++)
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    return 0;
}