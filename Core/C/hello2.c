#include <stdio.h>

int main(void)
{
    printf("Enter Your Name : ");
    char name[100];
    scanf("%99s", name);
    printf("Hello, %s", name);
    return 0;
}