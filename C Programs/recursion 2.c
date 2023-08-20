#include<stdio.h>
int factorial(int x);
int main()
{
    int facto,num;
    scanf("%d",&num);
    facto = factorial(num);
    printf("factorial of %d is: %d\n",num,facto);

}
int factorial(int x)
{
    if(x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x = x*factorial(x-1); //recursive function
    }
}
