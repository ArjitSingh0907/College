#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    for (int i=0 ; i<=num ; i++)
    {
        { 
            for (int j=0 ; j<i ; j++)
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
}