#include <stdio.h>

#include <stdlib.h>

//its for defining the structure for the days , month and year in date:

typedef struct {

    int year;

    int month;

    int day;

} Date;

// function defined

int isLeapYear(int year);

int daysInMonth(int year, int month);

int dateToDays(Date date);

int dateDifference(Date date1, Date date2);







int main() {

    Date date1, date2;

    

    printf("Enter the first date (YYYY MM DD):");

    scanf("%d%d%d",&date1.year,&date1.month,&date1.day);



    printf("Enter the second date (YYYY MM DD):");

    scanf("%d%d%d",&date2.year,&date2.month,&date2.day);

    

    int difference = dateDifference(date1, date2);

    

    printf("The difference between the two dates is %d days.\n", difference);

    

    return 0;

}

//if its an leap year

int isLeapYear(int year) {

    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

}



// for number of day in which month

int daysInMonth(int year, int month) {

    switch (month) {

        case 1: case 3: case 5: case 7: case 8: case 10: case 12:

            return 31;

        case 4: case 6: case 9: case 11:

            return 30;

        case 2:

            return isLeapYear(year) ? 29 : 28;

        default:

            return 0; // Invalid month

    }

}



//conversion of dates and adition of dates

int dateToDays(Date date) {

    int days = 0;

    for (int year = 0; year < date.year; year++) {

        days += isLeapYear(year) ? 366 : 365;

    }

    for (int month = 1; month < date.month; month++) {

        days += daysInMonth(date.year, month);

    }

    days += date.day - 1;

    return days;

}

//calculation of diffrence

int dateDifference(Date date1, Date date2) {

    int days1 = dateToDays(date1);

    int days2 = dateToDays(date2);

    return days2 - days1;

}
