#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int base;
    printf("Enter Base : ");
    scanf("%d", &base);

    int height;
    printf("Enter Height : ");
    scanf("%d", &height);

    printf("\n");

    float area = 0.5 * base * height;
    printf("Base of Triangle is : %d\n", base);
    printf("Height of Triangle is : %d\n", height);

    printf("\n");
    printf("__________________________________\n");
    printf("\n");
    printf("Area of Triangle (1/2xbxh) is : %.2f\n", area);
    printf("__________________________________\n");

    printf("\n");
    return 0;
}