#include <stdio.h>
#include <math.h>

int main(void)
{
    float rate, time, p, a;

    printf("Number time : ");
    scanf("%f", &time);
    printf("Number p : ");
    scanf("%f", &p);
    printf("Number rate : ");
    scanf("%f", &rate);

    float x = (1+(rate/100));
    float y = time;
    float result = pow(x, y);
    a = p * result;

    printf("Amount : %.3f\n", a);
    return 0;


}