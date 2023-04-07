#include <stdio.h>

int main() {
    int arr[] = {6, 9, 8, 7, 5, 1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, maxDiff = -1, diff;
    

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            diff = arr[j] - arr[i];
            if (diff > maxDiff) {
                maxDiff = diff;
            }
        }
    }
    
   
    printf("The maximum difference between two elements in the array is: %d\n", maxDiff);
    
    return 0;
}
