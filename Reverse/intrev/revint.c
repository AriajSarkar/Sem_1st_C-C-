#include <stdio.h>
#include <string.h>

void reverseInteger(int num)
{
    char temp[10]; // Temporary storage (string) to hold the digits as characters
    int index = 0; // Index to track position in temp array

    // Extract digits and store them in the temp array
    while (num != 0)
    {
        int digit = num % 10;
        temp[index++] = digit + '0'; // Store digit as a character
        num /= 10;
    }

    // Print the digits in the correct reversed order
    printf("Reversed Number: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%c", temp[i]);
    }
    printf("\n");
}
