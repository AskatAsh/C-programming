#include<stdio.h>
int pattern(int n);
int main()
{
    int n=3;
    pattern(n);

    return 0;

}

int pattern(int n)
{
    if(n==1)
    {
        printf("*\n");
        return;
    }
    pattern(n-1);
    for(int i=0;i<(2*n-1);i++)
    {
        printf("*");
    }
    printf("\n");
}
