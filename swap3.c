#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y);

int main(void)
{
    int a = 7;
    int b = 9;
    int temp;

    printf("Before Swapping, a = %d and b = %d\n", a , b);
    swap(a , b);

}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

    printf("Arjit Singh\n");
    printf("A50105225074\n");
    printf("After Swapping, a = %d and b = %d\n", x , y);
}
