#include <stdio.h>
#include "./utils/fn.h"

int main() {
    int n, marks[100], total = 0;
    float avg, percentage;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter the marks of student Subject %d: \n", i);
        scanf("%d", &marks[i]);
    }

    total = totalm(n, marks);
    avg = average(marks, n);
    percentage = percent(marks, n);

    printf("Total marks = %d\n", total);
    printf("Average marks = %f\n", avg);
    printf("Percentage = %f\n", percentage);

    return 0;
}