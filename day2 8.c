#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 4, 5, 4, 4}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int freq[n], i, j, count;
    
    
    for (i = 0; i < n; i++) {
        freq[i] = 0;
    }
    

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = -1;
            }
        }
        if (freq[i] != -1) {
            freq[i] = count;
        }
    }
    
    
    printf("Element\tFrequency\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != -1) {
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }
    
    return 0;
}
