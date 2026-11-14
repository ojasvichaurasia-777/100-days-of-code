// Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[3];
    int topper = 0;

    for (int i = 0; i < 3; i++) {
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    for (int i = 1; i < 3; i++) {
        if (students[i].marks > students[topper].marks) {
            topper = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[topper].name, students[topper].marks);

    return 0;
}