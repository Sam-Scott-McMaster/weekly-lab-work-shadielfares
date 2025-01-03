// This file computes a hailstone sequence
#include <stdio.h>
#include <stdlib.h>

int hailstone(long n)
{
    printf("%ld ", n);
    // Terminating case
    if (n == 1)
    {
        return 1;
    }
    // Base cases
    else if (n % 2 == 0)
    {
        return 1 + hailstone(n / 2);
    }
    else
    {
        return 1 + hailstone((n * 3) + 1);
    }
}

int main()
{
    // Used for testing
    hailstone(3);
}