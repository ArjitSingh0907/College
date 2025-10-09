#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    int j;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for ( j = 0; j <= n-1; j++)
        {
            printf("* ");
        }
        for (int k = 0; k <= n-i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}