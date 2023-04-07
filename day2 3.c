#include <stdio.h>

int main() {
    int arr[100], n, temp, i, j, max1, max2, min1, min2;
    float avg;
    int found = 0;
    
  
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
  
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    max1 = arr[0];
    max2 = arr[1];
    for (i = 2; i < n; i++) {
        if (arr[i] < max2) {
            break;
        } else if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else {
            max2 = arr[i];
        }
    }
    

    min1 = arr[n-1];
    min2 = arr[n-2];
    for (i = n-3; i >= 0; i--) {
        if (arr[i] > min2) {
            break;
        } else if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else {
            min2 = arr[i];
        }
    }
    
  
    avg = (float) (max2 + min2) / 2;
    

    for (i = 0; i < n; i++) {
        if (arr[i] == avg) {
            found = 1;
            break;
        }
    }
    

    printf("The second largest element in the array is: %d\n", max2);
    printf("The second smallest element in the array is: %d\n", min2);
    printf("The average of the second largest and smallest elements is: %f\n", avg);
    if (found) {
        printf("The average is present in the array.\n");
    } else {
        printf("The average is not present in the array.\n");
    }
    
    return 0;
}
