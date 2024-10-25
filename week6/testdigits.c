#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "digits.h"

int main()
{
    int min, max, sum;
    long n;

    n = 1234;
    // The &max tells us they want them to be pointers
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);
    if (max == 4 && min == 1 && sum == 10)
    {
        puts("success");
    }
    else
    {
        puts("failure");
        return EXIT_FAILURE;
    }

    // Test Case 2, negative numbers
    n = -1234;
    // Min, -1, Max, 4, Sum = 8
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);

    if (max == 4 && min == 1 && sum == 10)
    {
        puts("success");
    }
    else
    {
        puts("failure");
        return EXIT_FAILURE;
    }
    // Test Case 3, single num
    n = 0;
    // Min, -1, Max, 4, Sum = 8
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);
    if (max == 0 && min == 0 && sum == 0)
    {
        puts("success");
    }
    else
    {
        puts("failure");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}