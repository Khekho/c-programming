#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 15, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("The largest element in the array is: %d", max);
    
    return 0;
}
