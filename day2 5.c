#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, k;
    
   
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
  
  
    printf("The array without duplicates is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
