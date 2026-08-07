#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    typedef struct
    {
        char name[20];
        char nationality[30];
    } Student;

    Student info;

    printf("Enter Your Name : ");
    fgets(info.name, sizeof(info.name), stdin);

    printf("Enter Your Nationality : ");
    fgets(info.nationality, sizeof(info.nationality), stdin);

    printf("_________________________________\n");
    printf("\n");
    printf("Name of Student : %s", info.name);
    printf("Nationality of Student : %s", info.nationality);
    printf("_________________________________\n");
    return 0;
}