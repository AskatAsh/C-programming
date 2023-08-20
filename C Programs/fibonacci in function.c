#include<stdio.h>

int fibonacci(int n);
int main()
{
    int n;
    scanf("%d",&n);
    fibonacci(n);

}
int fibonacci(int n)
{
    int fibo[30],i;
    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            fibo[i] = i;
        }
        else
        {
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
        printf("%d ",fibo[i]);
    }
}
