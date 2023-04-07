#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int sum = 0;
    int i;

    printf("Enter the string : ");
    fgets(str, MAX_SIZE, stdin);

 
    for(i=0; str[i] != '\0'; i++)
    {
        sum += (int) str[i];
    }

    printf("Sum of all characters : %d\n", sum);

    return 0;
}
