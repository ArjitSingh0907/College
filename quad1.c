#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    printf("Enter 1st Variable : ");
    scanf("%d", &a);
    printf("Enter 2nd Variable : ");
    scanf("%d", &b);
    printf("Enter 3rd Variable : ");
    scanf("%d", &c);

    int x, y_1, y_2;
    x = ((b * b) - (4 * a * c));
    float root = sqrt(x);
    y_1 = -(b) + root;
    y_2 = -(b) - root;
    
    float z_1, z_2;
    z_1 = (y_1 / (2 * a)); 
    z_2 = (y_2 / (2 * a));

    printf("Roots of quadratic equation is : %.2f and %.2f", z_1, z_2);
}