#include <stdio.h>

int gcd(int n1, int n2);

int main()
{
    int n1, n2, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    lcm = (n1 * n2) / gcd(n1, n2);

    printf("LCM of %d and %d is %d.", n1, n2, lcm);

    return 0;
}


int gcd(int n1, int n2)
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return
