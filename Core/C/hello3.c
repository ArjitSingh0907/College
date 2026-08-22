#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char * name[100];
    printf("Enter your Name : ");
    scanf("%99s", name);

    //THIS SKIPS TRAILING NEW LINE.....
    
    printf("Hello, %s", name);

}