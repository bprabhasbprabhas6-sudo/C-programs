#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student s1;
    s1.id = 1;
    strcpy(s1.name, "John");
    s1.marks = 75.5;
    printf("Student: ID=%d, Name=%s, Marks=%.2f\n", s1.id, s1.name, s1.marks);
    return 0;
}