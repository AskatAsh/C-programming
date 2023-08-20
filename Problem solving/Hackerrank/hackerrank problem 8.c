#include<stdio.h>
int main()
{
    int n,i,rem,sum=0;
    scanf("%d",&n);

    for(i=1;n!=0;i++)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    printf("sum of digits: %d\n",sum);
}
