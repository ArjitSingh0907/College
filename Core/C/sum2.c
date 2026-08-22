#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int a,b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    int sum = a + b;    

    printf("Sum of %d and %d is: %d\n", a, b, sum);
    return 0;
}