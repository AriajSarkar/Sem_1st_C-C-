void intcalculator()
{
    int num1, num2, total, ch;

    printf("Enter the choice of operation: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &ch);

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (ch)
    {
    case 1:
        total = num1 + num2;
        printf("The result is: %d\n", total);
        break;
    case 2:
        total = num1 - num2;
        printf("The result is: %d\n", total);
        break;
    case 3:
        total = num1 * num2;
        printf("The result is: %d\n", total);
        break;
    case 4:
        total = num1 / num2;
        printf("The result is: %d\n", total);
        break;

    default:
        printf("Invalid choice");
        break;
    }

    return;
}