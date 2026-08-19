 // Q1 Write a program to input two numbers and display their sum.

#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d", sum);
    return 0;
}

// Q2 Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = (float)num1 / (float)num2;

   printf("Sum: %d\n", sum);
   printf("Difference: %d\n", difference);
   printf("Product: %d\n", product);
   printf("Quotient: %.2f\n", quotient);
    return 0;
}