#include<stdio.h>
int main()
{
    unsigned long long n,i,sum;
    scanf("%llu",&n);
    sum = (n*(n+1))/2;
    printf("%llu",sum);
    return 0;
}