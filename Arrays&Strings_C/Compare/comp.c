void compare()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);  // Remove & operator

    printf("Enter second string: ");
    scanf("%s", str2);  // Remove & operator

    if (strcmp(str1, str2) == 0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
}