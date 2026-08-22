#include <stdio.h>
#include <string.h>

void reverseRecursive(char *str, int start, int end) {
    if (start >= end)
        return;

    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call for the next pair
    reverseRecursive(str, start + 1, end - 1);
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    reverseRecursive(str, 0, strlen(str) - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}