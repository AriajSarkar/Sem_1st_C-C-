int coutchar(char name[])
{
    printf("Enter your name: ");
    scanf("%s", name);
    int len = strlen(name);
    printf("Count: %d\n", len);
    return len;
}