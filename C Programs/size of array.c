#include<stdio.h>

int main()
{
    int num[] = {123,153,199,156,174,183,135,172,160,130},arr_size,arr_element_size,arr_length;

    arr_size = sizeof(num);
    arr_element_size = sizeof(num[0]);

    arr_length = arr_size / arr_element_size;

    printf("Array size = %d\n",arr_size);
    printf("Array element size = %d\n",arr_element_size);
    printf("Array length = %d\n",arr_length);
}
