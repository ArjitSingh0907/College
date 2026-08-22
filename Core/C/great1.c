#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    printf("Enter Third Number : ");
    scanf("%d", &c);

    int large_1, large_2, largest;
    large_1 = (a>b)? a:b;
    large_2 = (b>c)? b:c;

    largest = (large_1 > large_2)? large_1 : large_2;

    printf("Largest Number among them is %i", largest);
}