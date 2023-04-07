#include <stdio.h>

int minJumps(int arr[], int n) {
    int curEnd = 0, curFarthest = 0, jumps = 0;
    for (int i = 0; i < n-1; i++) {
        curFarthest = (curFarthest > i+arr[i]) ? curFarthest : i+arr[i];
        if (i == curEnd) {
            curEnd = curFarthest;
            jumps++;
        }
        if (curEnd >= n-1) {
            return jumps;
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 4, 2, 1, 2, 3, 7, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min_jumps = minJumps(arr, n);
    if (min_jumps != -1) {
        printf("Minimum number of jumps to reach the end of the array: %d\n", min_jumps);
    }
    else {
        printf("The end of the array is not reachable.\n");
    }
    return 0;
}
