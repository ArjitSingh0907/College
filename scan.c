#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[100];

    printf("Enter Your Name : ");
    scanf("%99s", &name);

    printf("Hello, %s", name);
}