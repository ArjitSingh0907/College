#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int a,b,sub;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    sub = a - b;
    printf("Subtraction: %d\n", sub);
    return 0;
}