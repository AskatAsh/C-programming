#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    int absolute;
    //scanf("%d",&num);

    //absolute = abs(num);
    //printf("the absolute of %d is : %d\n", num, absolute);

    //float squareRoot = sqrt(num);
    //printf("the square root of %d is : %.3f\n", num, squareRoot);

    //int x; scanf("%d",&x);
    //int power = pow(num, x);
    //printf("the %d to the power %d is : %d\n", num,x, power);

    //double y; scanf("%lf",&y);
    //double result = log10(y);
    //printf("log10(%.3lf) = %.3lf\n", y, result);

    //double y; scanf("%lf",&y);
    //double result = exp(y);
    //printf("exp(%.3lf) = %.3lf\n", y, result);

    double y; scanf("%lf",&y);
    double result = tan(y);
    printf("tan(%.3lf) = %.3lf\n", y, result);
}
