#include<stdio.h>
int main()
{
    int array1[50],array2[50],i,n;

    printf("size of the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("array 1 : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        array2[i] = array1[i];
        //printf("%d ",array2[i]);
    }
    printf("array 2 : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }
}
