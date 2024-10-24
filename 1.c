#include <stdio.h>

// Function to check if a year is a leap year
int is_leap_year(int year) {
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    if (year % 4 == 0) return 1;
    return 0;
}

// Function to count the number of days in a given year before the given month
int days_in_month(int month, int year) {
    switch (month) {
        case 1: return 31;
        case 2: return is_leap_year(year) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 0;
    }
}

// Function to calculate the total number of days from 01/01/1900 to the given date
int total_days(int day, int month, int year) {
    int total_days = 0;
    
    // Add days for all the years from 1900 to the given year
    for (int i = 1900; i < year; i++) {
        total_days += is_leap_year(i) ? 366 : 365;
    }
    
    // Add days for all the months in the current year up to the given month
    for (int i = 1; i < month; i++) {
        total_days += days_in_month(i, year);
    }
    
    // Add the days in the current month
    total_days += day - 1;
    
    return total_days;
}

// Function to return the name of the day of the week
const char* get_day_name(int total_days) {
    const char* days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    return days[total_days % 7];
}

int main() {
    int day, month, year;
    
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    
    int days = total_days(day, month, year);
    
    printf("The day of the week is: %s\n", get_day_name(days));
    
    return 0;
}

