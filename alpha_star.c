#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
    
    printf("Arjit Singh\n");
    printf("A50105225074\n");
    
    return 0;
}