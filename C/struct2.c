#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[30];
    float basic, hra, da, total;
};

int main(void) 
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basic);

    printf("Enter HRA: ");
    scanf("%f", &e.hra);

    printf("Enter DA: ");
    scanf("%f", &e.da);

    e.total = e.basic + e.hra + e.da;

    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Basic: %.2f\n", e.basic);
    printf("HRA: %.2f\n", e.hra);
    printf("DA: %.2f\n", e.da);
    printf("Total Salary: %.2f\n", e.total);
    printf("Arjit Singh\n");
    printf("A50105225074\n");
    return 0;
}
 
