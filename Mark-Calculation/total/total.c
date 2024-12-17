#include "../utils/fn.h"

int totalm(int n, int marks[]) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += marks[i];
    }
    return sum;
}