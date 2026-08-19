// Q 11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    return 0;
}

// Q 12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The number is positive.\n");
    }
    else
    {
        if (num < 0)
        {
            printf("The number is negative.\n");
        }
        else
        {
            printf("The number is zero.\n");
        }
    }

    return 0;