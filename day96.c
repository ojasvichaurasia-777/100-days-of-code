// Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
};

int main() {
    struct Employee employee;

    printf("Name: ");
    scanf("%s", employee.name);

    printf("ID: ");
    scanf("%d", &employee.id);

    printf("Joining Date: ");
    scanf("%d %d %d", &employee.joining_date.day, &employee.joining_date.month, &employee.joining_date.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           employee.name, employee.id, employee.joining_date.day,
           employee.joining_date.month, employee.joining_date.year);

    return 0;
}