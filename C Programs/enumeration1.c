#include<stdio.h>

enum days_of_week{
    sun,mon,tue,wed,thu,fri,sat
};
int main()
{
    enum days_of_week day1,day2;

    day1 = sun;
    day2 = wed;
    printf("day1 = %d\n",day1);
    printf("day2 = %d\n",day2);
    int day_diff = day2 - day1;
    printf("day difference = %d\n",day_diff);
}
