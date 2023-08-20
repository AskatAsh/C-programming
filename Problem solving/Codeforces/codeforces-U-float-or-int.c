#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    int integer = (int)n;
    float decimal = n - integer;
    // printf("%d %.3f\n",integer,decimal);
    if(decimal==0){
        printf("int %d\n",integer);
    }
    else{
        printf("float %d %.3f",integer,decimal);
    }
    return 0;
}