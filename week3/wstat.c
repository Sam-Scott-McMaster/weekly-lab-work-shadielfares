/*Reads output from wc (as double), computes average line length (number of characters per line), and prints it to stdout rounded to 1 decimal place..
 * 
 * Shadi El-Fares, McMaster University , 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    double lines, words, characters;
        if (scanf("%lf %lf %lf", &lines, &words, &characters) != 3){
            fprintf(stderr, "Bad Value\n");
            return EXIT_FAILURE;
        }
        if(lines <= 0){
            fprintf(stderr, "Number of lines must be greater than 0.\n");
	}
        double avg_line_length = (characters - 1) / lines;
	printf("%.1lf\n", avg_line_length);
    return EXIT_SUCCESS;
}
