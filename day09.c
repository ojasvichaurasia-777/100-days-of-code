 
// Q1: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}

// Q2: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F.
int main()
{
    float percentage;
    printf("Enter the percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade A\n");
    }
    else if (percentage >= 80 && percentage < 90)
    {
        printf("Grade B\n");
    }
    else if (percentage >= 70 && percentage < 80)
    {
        printf("Grade C\n");
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf("Grade D\n");
    }
    else if (percentage < 60 && percentage >= 0)
    {
        printf("Grade F\n");
    }
    else
    {
        printf("Invalid percentage entered.\n");
    }

    return 0;
}
