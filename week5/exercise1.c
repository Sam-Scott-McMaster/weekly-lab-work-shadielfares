/*Input: Days of month, current date
 * Output: Well-formatted Calender
 * Shadi El-Fares, 400525799
 * Oct.8.24
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int daysofMonth, startDay, spaces;

	// Input for the number of days in the month
	printf("How many days this month? ");
	scanf("%d", &daysofMonth);

	// Input for the starting day
	printf("What's the starting day (1 = Monday, 7 = Sunday)? ");
	scanf("%d", &startDay);

	// Calender header
	printf(" M  T  W  T  F  S  S\n");

	// Calculate the number of spaces to print before the first day
	spaces = (startDay)*3 -2;

	// Put the leading spaces before the first day
	for (int i = 1; i < spaces; i++) {
		printf(" ");
	}

	// Loop through the days of the month
	for (int i = 1; i <= daysofMonth; i++) {
		// Print the day number with proper formatting
		printf("%2d ", i);

		// Move to the next line after printing Sunday (every 7th day)
		if ((i + startDay - 1) % 7 == 0) {
			printf("\n");
		}
	}
	printf("\n");  // Move to the next line after printing the last day
	return 0;
}
