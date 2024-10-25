/* Starter code for Lab 6.1 Activity
 *
 * This file will not compile as is. You need to create the digits function.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Main funcion. Runs test cases for the digits function.
 * Exits with failure code on first test case fail.
 * Otherwise exits with success.
 */
int digits(int n, int *max, int *min)
{
    int i, sum = 0;
    // It is neccesary to initalize them as zero or else it takes on either null or just won't work properly..
    // Just good practice.
    *min = 100, *max = -100;

    do
    {
        //Abs value to handle negative values
        n = abs(n);
        //Select right most digit
        int digit = n % 10;
        //Return max and min 
        if (digit > *max){
            *max = digit;
        }
        if (digit < *min){
            *min = digit;
        }
        sum += digit;
        //Get rid of rightmost digit
        n /= 10;
    } while (n > 0);
    
    return sum;
}