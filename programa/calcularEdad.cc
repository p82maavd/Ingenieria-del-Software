
#include <iostream>
#include <string>
#include <ctime>

 
/*check given year is leap year or not*/
int isLeapYear(int year, int mon) 
{
    int flag = 0;
    if (year % 100 == 0) 
    {
            if (year % 400 == 0) 
            {
                    if (mon == 2) 
                    {
                            flag = 1;
                    }
            }
    } 
    else if (year % 4 == 0) 
    {
            if (mon == 2) 
            {
                    flag = 1;
            }
    }
    return (flag);
}
 
 
int calcularEdad(std::string fecha){
 
    int DaysInMon[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};
    int days, month, year;
    char dob[100];
    time_t ts;
    struct tm *ct;
    std::string cdays, cmonth, cyear;

    cdays=fecha.substr(0,2);
    cmonth=fecha.substr(3,2);
    cyear=fecha.substr(6,4);

    days=stoi(cdays);
    month=stoi(cmonth);
    year=stoi(cyear);
 
    /*get current date.*/
    ts = time(NULL);
    ct = localtime(&ts);
 
    days = DaysInMon[month - 1] - days + 1;
 
    /* leap year checking*/
    if (isLeapYear(year, month)) 
    {
            days = days + 1;
    }
 
    /* calculating age in no of days, years and months */
    days = days + ct->tm_mday;
    month = (12 - month) + (ct->tm_mon);
    year = (ct->tm_year + 1900) - year - 1;
 
    /* checking for leap year feb - 29 days */
    if (isLeapYear((ct->tm_year + 1900), (ct->tm_mon + 1))) 
    {
            if (days >= (DaysInMon[ct->tm_mon] + 1)) 
            {
                    days = days - (DaysInMon[ct->tm_mon] + 1);
                    month = month + 1;
            }
    } 
    else if (days >= DaysInMon[ct->tm_mon]) 
    {
            days = days - (DaysInMon[ct->tm_mon]);
            month = month + 1;
    }
 
    if (month >= 12) 
    {
            year = year + 1;
            month = month - 12;
    }

    
    return year;
}