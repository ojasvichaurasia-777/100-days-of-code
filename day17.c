// Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main()
{
    int a, remainder, sum = 0 ,num;
    printf("enter the integer:");
    scanf("%d" ,&a);
    while(a != 0)
    {
        remainder = a % 10;
        sum =(sum+remainder*remainder*remainder);
        a = a/10;
        {
            if(sum == num)
            {
                printf("sum is a armstrong");
            }
            else
            {
                printf("not a armstrong");
            }
            return 0;
        }
    }
}
// Write a program to check if a number is prime.
#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}