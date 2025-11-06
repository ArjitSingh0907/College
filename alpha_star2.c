#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("Enter Level : ");
    scanf("%d", &num);

    for (int i=1 ; i<=num ; i++)
    {
        int n=1;
        for (int j=1 ; j<=i ; j++)
        {
            printf("%i", n);
            n++;
        }
        printf("\n");
    }
}