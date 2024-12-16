void two_num(){
    int a, b, swap;

    printf("Enter Numbers: "); // While Input Please Add Space Between The Numbers in Runtime
    scanf("%d", &a);
    scanf("%d", &b);
    
    swap = a;
    a = b;
    b = swap;

    printf("After Swapping: a = %d, b = %d\n", a, b);
}