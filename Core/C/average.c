#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int max;
    printf("Enter Number of Enteries : ");
    scanf("%d", &max);

    int num[max];
    int sum = 0;


    for (int i=0 ; i<max ; i++)
    {
        printf("Enter Number : ");
        scanf("%i", &num[i]);
        sum = sum + num[i];
    }

    float average = (sum / max);
    printf("Arjit Singh\n");
    printf("A50105225074\n");
    printf("Sum of numbers : %d\n", sum);
    printf("Average of numbers : %.2f\n", average);
}
