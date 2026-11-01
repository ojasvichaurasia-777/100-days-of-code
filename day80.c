// Store multiple student records (name, roll number, marks) into 
// a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[20];
    int roll, marks, i;

    // Writing into file
    fp = fopen("student.txt", "w");

    for(i = 0; i < 3; i++)
    {
        printf("Enter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // Reading from file
    fp = fopen("student.txt", "r");

    printf("\nStudent Records:\n");

    for(i = 0; i < 3; i++)
    {
        fscanf(fp, "%s %d %d", name, &roll, &marks);

        printf("Name: %s\n", name);
        printf("Roll: %d\n", roll);
        printf("Marks: %d\n\n", marks);
    }

    fclose(fp);

    return 0;
}
