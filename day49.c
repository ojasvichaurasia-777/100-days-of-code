// Print the initials of a name.
#include <stdio.h>
int main() {
    char firstName[50], lastName[50];
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);
    
    printf("Initials: %c.%c.\n", firstName[0], lastName[0]);
    
    return 0;
}
// Print initials of a name with the surname displayed in full.
#include <stdio.h>
int main() {
    char firstName[50], lastName[50];
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);
    
    printf("Initials: %c.%s\n", firstName[0], lastName);
    
    return 0;
}
