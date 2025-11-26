#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

    if (arr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    printf("Memory deallocated successfully.\n");
    printf("Arjit Singh\n");
    printf("A50105225074\n");

    return 0;
}