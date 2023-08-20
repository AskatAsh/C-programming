#include<stdio.h>
int main()
{
    int fibo,count,num,first,second;
    count = 0;
    first = 0;
    second = 1;
    scanf("%d",&num);

    while(count<num)
    {
        if(count<=1)
        {
            fibo = count;
        }
        else
        {
            fibo = first+second;
            first = second;
            second = fibo;
        }
        printf("%d ",fibo);
        count++;
    }
}
