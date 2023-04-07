#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int evenArr[n], oddArr[n], evenCount = 0, oddCount = 0;
    int i;
    
  
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount] = arr[i];
            evenCount++;
        } else {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }
    
    // Print the resulting arrays
    printf("The even elements are: ");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }
    printf("\n");
    
    printf("The odd elements are: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }
    printf("\n");
    
    return 0;
}
