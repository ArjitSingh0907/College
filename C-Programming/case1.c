#include <stdio.h>
int main(void)
{
    char name[20];
    printf("Enter Your Name : ");
    scanf("%19s", name);
    for (int i=0 ; i<20 ; i++)
    {
        if(name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
        else if(name[i] >= 97 && name[i] <= 122)
        {
            name[i] = name[i] - 32;
        }
        else if(name[i] == '\0')
        {
            break;
        }
        else
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }
    printf("Your Name : %s", name);
    return 0;
}