#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main(void)
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    int fact = factorial(num);
    printf("Factorial of a Number : %i\n", fact);
}

int factorial(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}