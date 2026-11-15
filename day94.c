// Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

void printStudent(struct Student student) {
    printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll_no, student.marks);
}

int main() {
    struct Student student;

    printf("Name: ");
    scanf("%s", student.name);

    printf("Roll: ");
    scanf("%d", &student.roll_no);

    printf("Marks: ");
    scanf("%d", &student.marks);

    printStudent(student);

    return 0;
}