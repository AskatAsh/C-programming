#include<stdio.h>
int main()
{
    int i,min,n;
    int num[10];

    printf("Array size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&
              num[i]);
    }
    min = num[0];

    for(i=1;i<n;i++)
    {
        if(min > num[i])
        {
            min = num[i];
        }
        if(min == num[i])
        {
            min = -1;
        }
    }
    if(min == -1){
        printf("Draw");
    }
    else{
        printf("min is : %d\n",min);
    }
}

