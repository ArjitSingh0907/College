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

    printf("Sum: %d\n", sum);
    return 0;
}