/* Reads a strings one at a time from stdin, and writes  to stdout, one string per line .
 * Writes to stderr and exits if it encounters a bad value.
 *
 * Shadi El-Fares, McMaster University , 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char value[1000];
    while (true)
    {
        int result = scanf("%s", value);
        if (result == 0)
        {
            fprintf(stderr, "Bad Value\n");
            return EXIT_FAILURE;
        }
        if (result == EOF)
            break;
        printf("%s\n", value);
    }
    return EXIT_SUCCESS;
}
