#include <stdio.h>
#include <string.h>

void reverse_string(char *);

int main() {
    char str[100];
    printf("Enter any string: ");
    scanf("%s", str);
    printf("The original string is: %s\n", str);
    reverse_string(str);
    printf("The reverse of the string is: %s\n", str);
    return 0;
}

void reverse_string(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
