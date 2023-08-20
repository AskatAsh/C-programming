#include<stdio.h>
int main()
{
    int i,max,n;
    int num[10];

    printf("Array size: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    max = num[0];

    for(i=0; i<n; i++)
    {
        if(max < num[i])
        {
            max = num[i];
        }
    }
    printf("max is : %d\n",max);
}
