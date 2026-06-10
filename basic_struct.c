#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student s1;
    printf("Enter student name: ");
    scanf("%49s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details : \n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollNumber);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}
