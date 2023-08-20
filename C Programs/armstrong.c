#include<stdio.h>
int main()
{
    int num,sum,temp,rem;
    sum = 0;
    scanf("%d",&num);

    temp = num;
    while(temp !=0)
    {
        rem = temp%10; //123%10 = 3;
        sum = sum+pow(rem,3); //0*10+3 = 32;
        temp = temp/10; //123/10 = 12;
        //printf("%d\n",sum);
    }
    //printf("%d",sum);
    if(sum == num)
    {
        printf("%d is an armstrong number\n",num);
    }
    else
    {
        printf("%d is not an armstrong number\n",num);
    }
}

