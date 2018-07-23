#include <stdio.h>

int sumPrimes(int n)
{
    int sum = 0;
    for(int i=2; i<=n; i++)
    {
        int isPrime = 1;
        for(int w=2; w<i; w++)
        {
            if (i % w == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime == 1)
        {
            sum += i;
        }
    }
    return sum;
}


int main (void)


{
    printf("%i\n", sumPrimes(10));




}