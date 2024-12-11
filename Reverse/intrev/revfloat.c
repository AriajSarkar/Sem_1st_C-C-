#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char *str, int length) {
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void reverseFloat(float num) {
    char numStr[50];  // Buffer to store the float as a string
    sprintf(numStr, "%.6f", num);  // Convert float to string with 6 decimal places

    // Remove trailing zeros after the decimal point
    int len = strlen(numStr);
    while (len > 0 && numStr[len - 1] == '0') {
        numStr[len - 1] = '\0';
        len--;
    }
    if (len > 0 && numStr[len - 1] == '.') {  // Remove the decimal point if no fractional part
        numStr[len - 1] = '\0';
        len--;
    }

    // Split into integer and fractional parts
    char *dot = strchr(numStr, '.');
    char intPart[20] = {0}, fracPart[20] = {0};
    int intLen = 0, fracLen = 0;

    if (dot) {
        strncpy(intPart, numStr, dot - numStr);  // Copy integer part
        intPart[dot - numStr] = '\0';           // Null-terminate
        strcpy(fracPart, dot + 1);              // Copy fractional part
        intLen = dot - numStr;
        fracLen = strlen(fracPart);
    } else {
        strcpy(intPart, numStr);                // No fractional part
        intLen = strlen(intPart);
    }

    // Reverse integer and fractional parts
    reverseString(fracPart, fracLen);  // Reverse fractional part
    reverseString(intPart, intLen);    // Reverse integer part

    // Print the result
    if (fracLen > 0) {
        printf("Reversed Number: %s.%s\n", fracPart, intPart);  // Merge and print
    } else {
        printf("Reversed Number: %s\n", intPart);              // No fractional part
    }
}