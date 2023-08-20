#include<stdio.h>
int main()
{
    int a,b,c;
    a = 32;
    b = 12;

    c = a&b;
    printf("bitwise and a & b = %d\n",c);

    c = a|b;
    printf("bitwise and a | b = %d\n",c);

    c = a^b;
    printf("bitwise and a ^ b = %d\n",c);
}
