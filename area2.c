#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

const int pie = 3.14;

int main(void)
{
    int radius;
    printf("Enter Radius : ");
    scanf("%d", &radius);

    printf("\n");
    float area = pie * radius * radius;
    printf("Radius of Circle is : %d\n", radius);
    printf("\n");
    printf("__________________________________\n");
    printf("\n");
    printf("Area of Circle (nearest decimal) is : %.2f\n", area);
    printf("__________________________________\n");
    printf("\n");
    return 0;

}