#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to calculate sum of digits
    for(int temp = num; temp != 0; temp /= 10) {
        digit = temp % 10;
        sum += digit;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
