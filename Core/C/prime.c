#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, prime;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d are:\n", n);

    for (int i = 2; i <= n; i++) 
    {
        prime = 1;

        for (int j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d ", i);
        }

    }
            
        printf("\n");
    
    printf("Arjit Singh\n");
    printf("A50105225074\n");

    return 0;
}