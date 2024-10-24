# Day of the Week Calculator

This program calculates the day of the week for a given date. It takes the input in the form of day, month, and year, and determines the corresponding day (e.g., Monday, Tuesday, etc.).

## Features

- **Leap Year Support**: The program correctly accounts for leap years when calculating the day of the week.
- **Accurate Date Calculation**: It calculates the total number of days since January 1, 1900, and uses this to determine the day of the week.
  
## How it Works

1. **Leap Year Check**: 
   The function `is_leap_year(int year)` determines if a given year is a leap year.
   
2. **Days in Month**:
   The function `days_in_month(int month, int year)` returns the number of days in a particular month, accounting for leap years in February.
   
3. **Total Days Calculation**:
   The function `total_days(int day, int month, int year)` calculates the total number of days from January 1, 1900, to the specified date.
   
4. **Day of the Week**:
   The function `get_day_name(int total_days)` maps the total number of days to a day of the week using a fixed array of days (Monday, Tuesday, etc.).

## Compilation and Execution

To compile and run the program:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your_username/day-of-week-calculator.git
   cd day-of-week-calculator
