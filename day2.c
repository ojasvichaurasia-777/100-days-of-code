// Q3  Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.14159
int main()
{
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    return 0;
}

// Q4 Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
    int length, breadth;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);
    return 0;
}