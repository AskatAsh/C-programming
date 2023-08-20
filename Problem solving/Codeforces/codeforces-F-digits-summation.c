#include<stdio.h>
int main()
{
    unsigned long long a,b,rem1,rem2,sum;
    scanf("%llu %llu",&a,&b);

    rem1=a%10;
    rem2=b%10;

    sum = rem1+rem2;
    printf("%llu\n",sum);
    return 0;
}