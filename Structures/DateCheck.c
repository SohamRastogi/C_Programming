#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct date {
        int day;
        int month;
        int year;
    }date;
    date a,b;
    // a --> 5/12/1999;
    // b --> 19/1/2023;
    a.day = 5;
    a.month = 12;
    a.year = 1999;
    b.day = 19;
    b.month = 1;
    b.year = 2023;
    int flag = 1;
    if(a.day == b.day ){
        if(a.month == b.month){
            if(a.year == b.year) printf("dates are equal");
        
        else printf("dates are unequal");}
    }
    else printf("dates are unequal");
    return 0;
}