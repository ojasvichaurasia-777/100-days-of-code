// Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.
#include <stdio.h>
int main() {
    int lateDays;
    float fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 5) {
        fine = lateDays * 2;
    } else if (lateDays <= 10) {
        fine = (5 * 2) + ((lateDays - 5) * 4);
    } else if (lateDays <= 30) {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
    } else {
        printf("Membership Cancelled.\n");
        return 0;
    }

    printf("Total fine: ₹%.2f\n", fine);
    return 0;
}

// Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit
#include <stdio.h>
int main() {
    int units;
    float bill = 0;

    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    printf("Total electricity bill: ₹%.2f\n", bill);
    return 0;
}

