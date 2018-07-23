#include <stdio.h>


int sumFibs(int n)
{
    int last = 1;
    int current = 1;
    int sum = 1;
    int temp;

   while(current <= n)
   {
    if (current % 2 != 0)
    {
        sum += current;
    }
    temp = current;
    current = last + current;
    last = temp;
   }

 return sum;
}

int main(void)
{
  printf("%i\n", sumFibs(1));
}
