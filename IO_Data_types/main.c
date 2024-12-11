#include<stdio.h>
#include<conio.h>
#include "./utils/fn.h"

int main() {
	int a, ch;

	printf("1. Perform operation on integer\n");
	printf("2. Perform operation on float\n");
	printf("3. Perform operation on char\n");
	printf("Enter your choice: ");
	printf("Choose an option: ");
	scanf("%d", &ch);


	switch (ch) {
		case 1:
			printf("Its an basic calculator for integers \n");
			intcalculator();
			break;
		case 2:
			printf("Its an basic calculator for float \n");
			floatcalculator();
			break;
		case 3:
			printf("Its an Chracter to ASCII converter \n");
			charconverter();
			break;
		default:
			printf("Invalid choice");
			break;
	}

	printf("Press any key to exit...\n");
	getch();
	return 0;
}
