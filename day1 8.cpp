#include <stdio.h>

int main() {
    int num, digit, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to reverse the number
    for(int temp = num; temp != 0; temp /= 10) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
    }

    printf("Reverse of %d is %d\n", num, reverse);

    return 0;
}
