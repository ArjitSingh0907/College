#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, next;
    int first = 0, second = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 0; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }


    
    printf("\n");
    
    printf("Arjit Singh\n");
    printf("A50105225074\n");
    return 0;
}