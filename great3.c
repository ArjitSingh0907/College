#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    printf("Number a : ");
    scanf("%d", &a);
    printf("Number b : ");
    scanf("%d", &b);

    if (a>b)
    {
        printf("a is greater than b\n");
        return 0;
    }
    else if (a<b)
    {
        printf("b is greater than a\n");
        return 0;
    }
    else if (a==b)
    {
        printf("a is equal to b\n");
        return 0;
    }
    else 
    {
        printf("error\n");
        return 0;
    }
}