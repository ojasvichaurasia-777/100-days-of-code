// Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student student;

    printf("Name: ");
    scanf("%s", student.name);

    printf("Roll: ");
    scanf("%d", &student.roll_no);

    printf("Marks: ");
    scanf("%d", &student.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll_no, student.marks);

    return 0;
}