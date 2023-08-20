#include<stdio.h>
int main(){
    int arr[5] = {10,20,30,40,50};

    int *ptr;
    ptr = arr;

    for(int i=5; i>0; i--)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
}
