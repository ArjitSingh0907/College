#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    printf("\n");
    int cube = num * num * num;
    printf("Number is : %d\n", num);
    printf("\n");
    printf("__________________________________\n");
    printf("\n");
    printf("Cube of Number is : %d\n", cube);
    printf("__________________________________\n");
    printf("\n");
    return 0;
    
}