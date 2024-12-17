#include "../utils/fn.h"

float average(int marks[], int n) {
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += marks[i];
    }
    return sum / n;
}