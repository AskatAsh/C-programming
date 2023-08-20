#include<stdio.h>

void display(int arr[], int size);
int arr_len(int arr[], int size);
int maximum(int arr[], int size);

int main()
{
    int num[] = {23,53,99,56,74,83,35},arr_size;

    arr_size = arr_len(num,sizeof(num));
    printf("Array length = %d\n",arr_size);
    display(num, arr_size);
    int max_value = maximum(num, arr_size);
    printf("\nMax value in array is: %d\n",max_value);
}

void display(int arr[], int size)
{
    int i;
    printf("\nThe array : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int arr_len(int arr[], int size)
{
    int len;
    len = size / sizeof(arr[0]);
    //printf("\nArray length = %d\n",len);

    return len;
}
int maximum(int arr[], int size)
{
    int i,max=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    //printf("\nMax in array : %d\n",max);
    return max;
}
