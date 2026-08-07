#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
}