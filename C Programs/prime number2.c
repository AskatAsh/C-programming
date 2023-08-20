#include<stdio.h>
int main()
{
    int n=9,i,prime=1;

    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            prime = 0;
            break;
        }
    }
    if(prime == 1)
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
}
