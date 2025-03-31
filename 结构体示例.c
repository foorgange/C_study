#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    struct date{
        int month;
        int day;
        int year;
    };
    struct date today;
    
    today.month = 07;
    today.day = 8;
    today.year = 2021;
    
    printf("Today's date is %d/%d/%d\n", today.month, today.day, today.year);
    return 0;
    
}
