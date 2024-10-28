#include <stdio.h>
#include <stdlib.h>

int hailstone(long n)
{
    printf("%ld ", n);
    if (n == 1)
    {
        return 1;
    }
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