#include <stdio.h>

#define N 5

int main() {
    int mas[N], i, minIndex = 0, maxIndex = 0, product = 1, s = 0;
    
    puts("Enter array numbers:");
    for (i = 0; i < N; i++) {
        scanf("%d", &mas[i]);
        if (mas[i] < mas[minIndex]) minIndex = i;
        if (mas[i] > mas[maxIndex]) maxIndex = i;
        if (mas[i] < 0) s += mas[i];
    }
    
    if (minIndex > maxIndex) {
        int temp = minIndex;
        minIndex = maxIndex;
        maxIndex = temp;
    }
    
    for (i = minIndex + 1; i < maxIndex; i++) product *= mas[i];
    
    printf("Non-positive sum: %d\n", s);
    printf("Product of elements between min and max: %d\n", maxIndex - minIndex > 1 ? product : 0);
    return 0;
}
