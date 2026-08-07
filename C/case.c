#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name[20];
    printf("Enter Your Name : ");
    scanf("%s", name);

    for (int i = 0; i < strlen(name); i++)
    {

        if (name[i] >= 'a' || name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
        else
        {
            printf("Invalid Input!\n");
        }
    }

    printf("Arjit Singh\n");
    printf("A50105225074\n");
    printf("UpperCase : %s\n", name);
    return 0;
}
