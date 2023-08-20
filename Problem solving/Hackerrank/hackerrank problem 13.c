#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size,i,sum=0;
    scanf("%d",&size);

    int *dynamic_array = (int*)malloc(size * sizeof(int));

    if(dynamic_array == NULL)
    {
        printf("The memory allocation failed. Exiting program...\n");
        return 1;
    }

    for(i=0; i<size; i++)
    {
        scanf("%d",&dynamic_array[i]);
    }

    for(i=0; i<size; i++)
    {
        sum = sum+dynamic_array[i];
    }
    printf("%d\n",sum);

    return 0;
}

