#include<stdio.h>
#include "./utils/fn.h"

int main() {
    int ch;

    printf("Choose The Method To Swap The Numbers:\n");
    printf("1. Two Number Swap \n");
    printf("2. Three Number Swap \n");
    printf("Enter Your Choice: ");
    scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            two_num();
            break;
        case 2:
            three_num();
            break;
        
        default:
            printf("Invalid Choice\n");
            break;
        }

    return 0;
}