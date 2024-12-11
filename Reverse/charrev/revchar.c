#include <stdio.h>
#include <string.h>

void reverseChar(char *str)
{
    int length = strlen(str);
    printf("Reversed String: ");
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}