#include <stdio.h>

int main(void)
{
    int n, i, j, prime, sum = 0, x, chislaSum;
    printf("enter number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        prime = 1;
        chislaSum = 0;

        if (i == 1)
        {
            prime = 0;
        }

        else
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime > 0)
        {
            printf("\n%d is a prime", i);
            x = i;

            while (x > 0)
            {
                chislaSum += x % 10;
                x = x / 10;
            }

            sum += chislaSum;
        }
    }

    printf("\nsum = %d", sum);

    return 0;
}