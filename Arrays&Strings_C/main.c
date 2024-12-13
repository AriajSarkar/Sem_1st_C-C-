#include <stdio.h>
#include <string.h>
#include "./utils/fn.h"

int main()
{
    char name[20];
    int ch;

    printf("1. Count, Copy and Concatenate\n");
    printf("2. Compare\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        coutchar(name);
        copychar(name);
        Concatenate(name);
        break;
    case 2:
        compare();
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}