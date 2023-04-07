#include <stdio.h>

int checkPrimeNumber(int n);

int main()
{
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        if (checkPrimeNumber(i) == 1)
        {
            if (checkPrimeNumber(n-i) == 1)
            {
                printf("%d = %d + %d\n", n, i, n-i);
                flag = 1;
            }
        }
    }

    if (flag == 0)
        printf("%d cannot be expressed as the sum of two prime numbers.", n);

    return 0;
}


int checkPrimeNumber(int n)
{
    int i, flag = 1;

    for(i=2; i<=n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}
