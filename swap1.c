#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, temp;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Swapping Numbers Gives a = %i and b = %i", a, b);
}