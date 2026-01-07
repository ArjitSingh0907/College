#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[10], str2[10];
    printf("Enter String 1 : ");
    scanf("%s", str1);

    printf("Enter String 2 : ");
    scanf("%s", str2);

    strcat(str1, str2);
    {
        printf("%s", str1);
    }
}