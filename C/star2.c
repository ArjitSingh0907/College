#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
    for (int i=0; i<=5-1; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}