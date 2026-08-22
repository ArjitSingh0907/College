#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    float root = sqrt(num);
    printf("\n");
    printf("Square root of Number is : %.2f\n", root);
    printf("\n");
    return 0;
}