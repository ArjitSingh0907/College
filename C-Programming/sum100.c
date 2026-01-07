#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 100;
    int x;

    x = (n * (n + 1)) / 2;

    printf("Sum of First 100 terms is %i", x);
}