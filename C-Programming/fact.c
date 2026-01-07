#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num, i = 1;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    printf("Arjit Singh\n");
    printf("A50105225074\n");
    
    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } else 
    {
        do 
        {
            factorial *= i;
            i++;
        } while (i <= num);

        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}