#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    
    printf("Arjit Singh\n");
    printf("A50105225074\n");
    
    printf("Reversed number is: %d\n", reversed);
}