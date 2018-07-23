#include <stdio.h>

long long factorialize (int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorialize(num - 1);
    }
}

int main (void)
{
    printf("%lld\n", factorialize(20));
}