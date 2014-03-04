#include <stdio.h>
static  char daytab[2][13] = {
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

char *month_name(int n)
{
    static char *name[] = {
	"Illegal month",
	"January", "February","March",
	"April", "May", "June",
	"July", "August", "September",
	"October", "November", "December"
    };
    
    return (n < 1 || n > 12) ? name[0] : name[n];
}

int day_of_year(int year, int month, int day)
{
    int i, leap;

    leap = (year % 4 ==0 && year % 100 != 0) || year % 400 == 0;

    for (i = 1; i < month; i++)
	day += daytab[leap][i];
    return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;

    leap = (year % 4 ==0 && year % 100 != 0) || year % 400 == 0;

    for (i = 1; yearday > daytab[leap][i]; i++)
	yearday -= daytab[leap][i];

    *pmonth = i;
    *pday = yearday;
}


int main()
{
    int yearday, year, a = 0, b = 0;
    int  *pmonth = &b, *pday = &a;	    //Segment fault 11 if without this assignment

    printf("Please input a year:\n");
    scanf("%d", &year);
    printf("Please input a yearday:\n");
    scanf("%d", &yearday);

    month_day(year, yearday, pmonth, pday);

    printf("It is the %s and %d day\n", month_name(*pmonth), *pday);
    printf("It is the %d day\n",day_of_year(year, *pmonth, *pday));
    return 0;
}
