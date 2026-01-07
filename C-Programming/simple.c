#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float prncpl;
    float rate;
    float time;
    float si;
    float amt;

    printf("Enter Principal: ");
    scanf("%f", &prncpl);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    si = (prncpl * rate * time) / 100;

    amt = prncpl + si;

    printf("Arjit Singh\n");
    printf("A50105225074\n");
    printf("Simple Interest = %.2f\n", si);
    printf("Total Amount = %.2f\n", amt);

    return 0;
}