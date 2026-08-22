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

    int largest;
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Largest Number among them is %i", largest);
}