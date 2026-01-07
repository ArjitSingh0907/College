#include <stdio.h>
#include <string.h>

//String Recersal Fuction...
void reverseString(char *str) 
{   int length = strlen(str);
    for (int i = 0; i < (length / 2) ; i++) 
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main(void) 
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Copy...
    strcpy(temp, str1);
    printf("\nCopied string: %s\n", temp);

    // Concatenation...
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    //Reversal...
    reverseString(str1);
    printf("Reversed string: %s\n", str1);

    return 0;
}