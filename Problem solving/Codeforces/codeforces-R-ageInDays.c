#include<stdio.h>
int main()
{
    unsigned long n,rem,months,days,years;
    scanf("%lu",&n);

    years = n/365;
    printf("%lu years\n",years);

    rem = n%365;
    months = rem/30;
    printf("%lu months\n",months);

    days = rem%30;
    printf("%lu days\n",days);
    return 0;
}