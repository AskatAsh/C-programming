#include<stdio.h>
int main()
{
    long long int num,count,temp;
    scanf("%lld",&num);
    temp = num;
    count = 0;
    while(num !=0)
    {

        num = num/10;
        ++count;
    }
    printf("number of digits in %lld is: %lld\n",temp,count);
}


