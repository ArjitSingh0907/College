#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, sum;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);

    sum = a + b;
    a = sum - a;
    b = sum - b;

    printf("Swapping the numbers gives a = %i and b = %i", a, b);
}