#include<stdio.h>
int main()
{
    int n,i;
    int pos = -1;
    scanf("%d",&n);
    int num[20] = {10,2,30,15,28,5};

    for(i=0;i<6;i++)
    {
         if(n == num[i])
         {
             pos = i+1;
             //printf("position of number %d is: %d\n",n,i+1);
             break;
         }
    }

}


