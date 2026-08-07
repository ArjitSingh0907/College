#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    char operator;

    printf("Enter Num1 : ");
    scanf("%d", &num1);

    printf("Enter Num2 : ");
    scanf("%d", &num2);

    printf("Operation : ");
    scanf(" %c", &operator);

    switch(operator)
    {
        case '+' :
        
            printf("Addition : %i", num1 + num2);
            break;
        
        case '-' :
        
            printf("Subtraction : %i", num1 - num2);
            break;
        
        case '/' :
        
            printf("Division : %i", num1 / num2);
            break;
        
        case '*' :
        
            printf("Product : %i", num1 * num2);
            break;
        
        default:
        
            printf("Invalid Operator!\n");
    }  
    return 0;
    
}