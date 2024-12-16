void three_num(){
    int a, b, c, swap;

    printf("Enter Three Number: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    swap = a;
    a = b;
    b = c;
    c = swap;

    printf("After Swapping: a = %d, b = %d, c = %d\n", a, b, c);
}