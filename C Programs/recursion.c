#include<stdio.h>

int factorial(int x);
int main()
{
    int num = 4;
    printf("the factorial of %d is %d\n",num,factorial(num));
}
int factorial(int x)
{
    if(x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }
}
