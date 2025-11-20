#include <stdio.h>
#include <stdlib.h>

int const max = 10;

int main(void) 
{
    int arr[max];
    int *ptr;
    int i;
    int n;

    printf("Number of Elements : ");
    scanf("%d", &n);
    printf("Enter Numbers : ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", *ptr);
        ptr++;
    }

    printf("\n");
    return 0;
}