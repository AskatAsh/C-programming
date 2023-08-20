#include<stdio.h>
int main()
{
    int num,temp,sum,fact,rem,i;
    scanf("%d",&num);
    //fact = 1;
    sum = 0;
    temp = num;
    while(temp != 0)
    {
        rem = temp%10;
        //printf("%d\n",rem);
        fact = 1;
        for(i=1;i<=rem;i++)
        {
            fact = fact*i;
        }
        printf("%d\n",fact);
        temp = temp/10;
        sum = sum+fact;
    }
    printf("strong of %d is : %d\n",num,sum);
    if(num == sum)
    {
        printf("%d is a strong number\n",num);
    }
    else
    {
        printf("%d is not a strong number\n",num);
    }
}
