#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    FILE *fp;
    char str[100];

    fp = fopen("test.txt", "w");

    if (fp == NULL)
{
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter text to write into file: ");
    scanf(" %[^\n]", str);
    fprintf(fp, "%s", str);
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) 
{
        printf("Error opening file!\n");
        return 1;
    }
    printf("\nData read from file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) 
{
        printf("%s", str);
    }
    fclose(fp);
    printf("\n");
    printf("Arjit Singh\n");
    printf("A50105225074\n");
    return 0;
}
