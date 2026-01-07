#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a, b, c;
    int greatest;

    printf("Enter three numbers of your choice:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        greatest = a;
    }
    else if (b >= a && b >= c)
    {
        greatest = b;
    }
    else
    {
        greatest = c;
    }

    int temp;

    if (a > b) 
    { 
        temp = a;
        a = b;
        b = temp; 
    }
    if (a > c) 
    { 
        temp = a; 
        a = c; 
        c = temp; 
    }
    if (b > c) 
    { 
        temp = b; 
        b = c; 
        c = temp; 
    }

    printf("greatest number among them is : %d\n", greatest);
    printf("Numbers in ascending order: %d %d %d", a, b, c);
    printf("\n");
}