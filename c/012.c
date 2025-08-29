#include <stdio.h>
#include <math.h>

long calculate_triangle_number(int n);
int num_of_divisors(int n);

int main(void)
{
    // test
    float example_number = 7;
    int triangle_number = calculate_triangle_number(example_number);
    int divisor_total = num_of_divisors(triangle_number);
    printf("Triangle number: %d\n", triangle_number);
    printf("Number of divisors: %d\n\n", divisor_total);

    int total_divisors = 0;
    int n = 1;
    int current_triangle_number;

    while (total_divisors < 501)
    {
        current_triangle_number = calculate_triangle_number(n);
        total_divisors = num_of_divisors(current_triangle_number);
        printf("Current triangle number: %d - Number of divisors: %d\n", current_triangle_number, total_divisors);
        n++;
    }

    printf("Triangle number with over 500 divisors found: %d; %d total divisors.", current_triangle_number, total_divisors);

    return 0;
    
}

// working
long calculate_triangle_number(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + calculate_triangle_number(n - 1);
    }
}

// working
int num_of_divisors(int n)
{
    int total = 0;

    for (size_t i = 1; i <= ceil(n / 2); i++)
    {
        if (n % i == 0)
        {
            total++;
        }
        else
        {
            continue;
        }
    }
    
    return total;
}