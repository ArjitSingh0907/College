#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 10;
    for (int i=1 ; i<=n ; i++)
    {
        for (int space=0 ; space<=(n-i) ; space++)
        {
            printf(" ");
        }
        for (int j=1 ; j<=i ; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}