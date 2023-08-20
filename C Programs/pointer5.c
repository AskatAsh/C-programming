#include<stdio.h>
int main()
{
    int num[5] = {10,20,30,40,50};
    int *ptr = &num[0],i;

    for(i=0;i<5;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
}
