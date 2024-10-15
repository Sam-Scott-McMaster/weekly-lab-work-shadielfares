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
    char *monthName = "";  // To store the name of the month

    do {
        printf("Enter a date (mm/dd/yyyy): ");
        numValuesRead = scanf("%d /%d /%d", &month, &day, &year);

        // Switch to determine whether to quit based on 0/0/0 input
        switch (day) {
            case 0:
                switch (month) {
                    case 0:
                        switch (year) {
                            case 0:
                                quit = 1;  // Set flag to quit if 0/0/0 is entered
                                break;
                        }
                }
        }

        if (quit == 1) {
            continue;  // Skip the rest of the loop if quit flag is set
        }

        // Switch for validation: only continue if valid date is entered
        switch (1) {
            case 1:
                if (day > 31 || day < 1 || month > 12 || month < 1) {
                    printf("Invalid date entered. Please enter a valid date.\n");
                    continue;  // Skip invalid date
                }
        }

        // If it's the first valid date, initialize the smallest date variables
        switch (firstValidDate) {
            case 1:
                smallestDay = day;
                smallestMonth = month;
                smallestYear = year;
                firstValidDate = 0;  // Mark that we have initialized the first date
                break;

            case 0:  // Compare and find the smallest date
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
                break;
        }

    } while (quit == 0);  // Continue the loop until quit flag is set

    // After exiting the loop, check if a valid date was entered
    if (!firstValidDate) {
        // Determine the month name directly
        switch (smallestMonth) {
            case 1:  monthName = "January";   break;
            case 2:  monthName = "February";  break;
            case 3:  monthName = "March";     break;
            case 4:  monthName = "April";     break;
            case 5:  monthName = "May";       break;
            case 6:  monthName = "June";      break;
            case 7:  monthName = "July";      break;
            case 8:  monthName = "August";    break;
            case 9:  monthName = "September"; break;
            case 10: monthName = "October";   break;
            case 11: monthName = "November";  break;
            case 12: monthName = "December";  break;
            default: monthName = "";          break;
        }

        printf("The earliest valid date is %d %s, %d\n", smallestDay, monthName, smallestYear);
    } else {
        printf("No valid dates were entered.\n");
    }

    return 0;
}

