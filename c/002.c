#include <stdio.h>

int main(void)
{
    int x = 0; 
    int y = 1;
    int even_sum = 0;

    while (x < 4000000)
    {
        if (x % 2 == 0)
        {
            even_sum += x;
        }

        x += y;

        if (y % 2 == 0)
        {
            even_sum += y;
        }

        y += x;
    }

    printf("\nThe sum of all the even Fibonacci numbers below 4 million is: %d\n", even_sum);
    
    return 0;
}