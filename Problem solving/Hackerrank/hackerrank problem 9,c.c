#include<stdio.h>

int nth_term(int n,int a,int b,int c);
int main()
{
    int n,a,b,c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
int nth_term(int n,int a,int b,int c)
{
    int sum;
    if(n==1)
    {
        return a;
    }
    else if(n==2)
    {
        return b;
    }
    else if(n==3)
    {
        return c;
    }
    else
    {
        sum = a+b+c;
        return nth_term(n-1,b,c,sum);
    }
}
