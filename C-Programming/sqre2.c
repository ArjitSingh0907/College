#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    printf("\n");
    int square = num * num;
    printf("Number is : %d\n", num);
    printf("\n");
    printf("__________________________________\n");
    printf("\n");
    printf("Square of Number is : %d\n", square);
    printf("__________________________________\n");
    printf("\n");
    return 0;
    
}
