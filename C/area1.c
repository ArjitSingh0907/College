#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int length;
    printf("Enter Length : ");
    scanf("%d", &length);

    int width;
    printf("Enter Width : ");
    scanf("%d", &width);

    printf("\n");

    int area = length * width;
    printf("Length of Reactangle is : %d\n", length);
    printf("width of Reactangle is : %d\n", width);

    printf("\n");
    printf("__________________________________\n");
    printf("\n");
    printf("Area of Rectangle is (lxb) : %d\n", area);
    printf("__________________________________\n");

    printf("\n");
    return 0;
}
