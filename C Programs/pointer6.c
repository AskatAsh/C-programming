#include<stdio.h>

void sumAndavg(int a, int b, int *sum, float *avg)
{
    //int sum;
    //float avg;
    *sum = a + b;
    *avg = (float)(*sum) / 2;
    //printf("Sum = %d and Average = %.3f\n",sum,avg);
}

int main()
{
    int a,b,sum;
    float avg;
    a = 6;
    b = 5;
    //sumAndavg(a, b);
    sumAndavg(a, b, &sum, &avg);
    printf("Sum = %d and Average = %.2f\n",sum,avg);
}
