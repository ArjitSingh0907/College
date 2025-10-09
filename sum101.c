#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int sum = 0;
    printf("Enter First Number : ");
    scanf("%d", &n);

    for (int i=0 ; i<=100 ; i++)
    {
        sum += i;
    }

    printf("Sum of First 100 terms is %i", sum);
}