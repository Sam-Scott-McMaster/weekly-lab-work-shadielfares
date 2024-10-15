/*Input: Take mm/dd/yyyy date format
 * Output: Earliest date entered
 * Shadi El-Fares, 400525799
 * Oct.8.24
 */
#include <stdio.h>

int main() {
    int day, month, year;
    int smallestDay = 0, smallestMonth = 0, smallestYear = 0;
    int numValuesRead;
    int firstValidDate = 1;  // To track the first valid date
    int quit = 0;  // Flag to control when to exit the loop

    do {
        printf("Enter a date (mm/dd/yyyy): ");
        numValuesRead = scanf("%d /%d /%d", &month, &day, &year);

        // Set the flag to quit if the user enters 0/0/0
        if (day == 0 && month == 0 && year == 0) {
            quit = 1;
        } else if (day > 31 || day < 1 || month > 12 || month < 1) {
            printf("Invalid date entered. Please enter a valid date.\n");
            continue;
        }

        // If the quit flag is set, don't process further and exit on the next iteration
        if (quit == 1) {
            continue;
        }

        // If it's the first valid date, initialize the smallest date variables
        if (firstValidDate) {
            smallestDay = day;
            smallestMonth = month;
            smallestYear = year;
            firstValidDate = 0;  // Mark that we have initialized the first date
        } else {
            // Compare year first
            if (year < smallestYear) {
                smallestYear = year;
                smallestMonth = month;
                smallestDay = day;
            } 
            // If years are equal, compare month
            else if (year == smallestYear && month < smallestMonth) {
                smallestMonth = month;
                smallestDay = day;
            }
            // If both year and month are equal, compare day
            else if (year == smallestYear && month == smallestMonth && day < smallestDay) {
                smallestDay = day;
            }
        }

    } while (quit == 0);  // Continue the loop until quit flag is set

    // After exiting the loop, check if a valid date was entered
    if (!firstValidDate) {
        printf("The earliest valid date is %d/%d/%d\n", smallestMonth, smallestDay, smallestYear);
    } else {
        printf("No valid dates were entered.\n");
    }

    return 0;
}

