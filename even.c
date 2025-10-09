#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);

    if (x%2 == 0)
    {
        printf("This is an EVEN number");
        return 0;
    }

    else if (x%2 != 0)
    {
        printf("This is an ODD number");
        return 0;
    }
    else
    {
        printf("Invalid Input :)");
        return 1;
    }
}