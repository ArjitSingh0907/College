#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[10][10], b[10][10], result[10][10];
    int rows, cols, choice;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Choose operation:\n1. Addition\n2. Multiplication\n");
    printf("Enter Your Choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                result[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("Sum of matrices:\n");

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else if (choice == 2)
    {
        if (rows != cols)
        {
            printf("Multiplication requires square matrices (same rows and cols).\n");
            return 0;
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                result[i][j] = 0;
                {
                    for (int k = 0; k < cols; k++)
                    {
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
        }

        printf("Product of matrices:\n");

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid choice.\n");
    }

    printf("Arjit Singh\n");
    printf("A50105225074\n");
    return 0;
}
