#include <stdio.h>
#include <string.h>
union Student {
    int roll;
    float marks;
    char name[30];
};
int main(void) 
{
    union Student s;
    int choice;

    printf("Choose what to store:\n");
    printf("1. Roll Number\n");
    printf("2. Marks\n");
    printf("3. Name\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) 
{
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &s.roll);
            printf("Stored Roll Number: %d\n", s.roll);
            break;

        case 2:
            printf("Enter Marks: ");
            scanf("%f", &s.marks);
            printf("Stored Marks: %.2f\n", s.marks);
            break;

        case 3:
            printf("Enter Name: ");
            scanf("%s", s.name);
            printf("Stored Name: %s\n", s.name);
            break;

        default:
            printf("Invalid choice!\n");
    }
    printf("Arjit Singh\n");
    printf("A50105225074\n");
    return 0;
}
