#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    for (int i = 0; i < n; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }
    printf("Array1:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr1[i]);
    }
    printf("\nArray2:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr2[i]);
    }
    return 0;
}
