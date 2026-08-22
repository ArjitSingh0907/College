#include <stdio.h>
#include <stdlib.h>
int const pi = 3.14;

int main()
{
    int choice;
    float area;

    printf("Choose any one out of these:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("4. Triangle\n");
    printf("Enter your choice in numbers between 1 to 4: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        float radius;
        printf("Enter radius of the circle: ");
        scanf("%f", &radius);
        area = pi * radius * radius;

        printf("Arjit Singh\n");
        printf("A50105225074\n");

        printf("Area of Circle = %.3f\n", area);
        break;
    }
    case 2:
    {
        float length, breadth;
        printf("Enter length and breadth of the rectangle: ");
        scanf("%f %f", &length, &breadth);
        area = length * breadth;

        printf("Arjit Singh\n");
        printf("A50105225074\n");

        printf("Area of Rectangle = %.3f\n", area);
        break;
    }
    case 3:
    {
        float side;
        printf("Enter side of the square: ");
        scanf("%f", &side);
        area = side * side;

        printf("Arjit Singh\n");
        printf("A50105225074\n");

        printf("Area of Square = %.3f\n", area);
        break;
    }
    case 4:
    {
        float base, height;
        printf("Enter base and height of the triangle: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;

        printf("Arjit Singh\n");
        printf("A50105225074\n");

        printf("Area of Triangle = %.2f\n", area);
        break;
    }
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}