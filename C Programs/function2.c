#include<stdio.h>

void display(int arr[], int size);
int arr_len(int arr[], int size);
int main()
{
    int num[] = {23,53,21,56,74,83,35},arr_size;

    arr_size = arr_len(num,sizeof(num));
    printf("Array length = %d\n",arr_size);
    display(num, arr_size);
}

void display(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
int arr_len(int arr[], int size)
{
    int len;
    len = size / sizeof(arr[0]);
    //printf("\nArray length = %d\n",len);

    return len;
}
