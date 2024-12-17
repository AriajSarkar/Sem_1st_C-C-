#include "../utils/fn.h"

float percent(int marks[], int n) {
    float total = 0;
    float maxPossibleMarks = n * 100.0;  // Each subject has max marks of 100
    
    for (int i = 1; i <= n; i++) {
        total += marks[i];
    }
    return (total / maxPossibleMarks) * 100.0;  // Convert to percentage
}