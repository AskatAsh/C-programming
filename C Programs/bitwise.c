#include<stdio.h>
int main()
{
    int x=32,y=12,z;

    z= x&y;
    printf("a&b = %d\n",z);

    z= x|y;
    printf("a|b = %d\n",z);

    z= x^y;
    printf("a^b = %d\n",z);
}
