#include<stdio.h>
#include<conio.h>
#include "./utils/fn.h"

int main()
{
    int choice;
    int num1;
    float num2;

    // Display menu to the user
    printf("Select the type to reverse:\n");
    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. Char\n");
    printf("Enter your choice: ");

    // Get user choice
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Reverse Integer
        printf("Enter an integer: ");
        scanf("%d", &num1); // Read integer input
        reverseInteger(num1);
        break;

    case 2: // Reverse Float
        printf("Enter a float number: ");
        scanf("%f", &num2); // Read float input
        reverseFloat(num2);
        break;

    case 3: // Reverse Char
        char input[100];
        printf("Enter a string: ");
        scanf("%s", input);
        reverseChar(input);
        break;

    default:
        printf("Invalid choice! Please select either 1, 2, or 3.\n");
    }

    printf("Press any key to continue...\n");
    getch(); // Wait for key press (Windows-specific)

    return 0;
}