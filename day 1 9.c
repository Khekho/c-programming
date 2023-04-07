#include <stdio.h>

int main() {
    int decimal_num, binary_num = 0, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    // Loop to convert decimal to binary
    while(decimal_num > 0) {
        int remainder = decimal_num % 2;
        binary_num += remainder * base;
        decimal_num /= 2;
        base *= 10;
    }

    printf("Binary number: %d\n", binary_num);

    return 0;
}
