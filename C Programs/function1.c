#include<stdio.h>

void calculatePower(double base,double exp);
int main()
{
    double base,exp;
    printf("Enter base and exponent: ");
    scanf("%lf %lf",&base,&exp);

    calculatePower(base, exp);
}
void calculatePower(double base,double exp)
{
    double result=1;
    int i;
    for(i=1;i<=exp;i++)
    {
        result = result * base;
    }
    printf("%.1lf to the power %.1lf is : %.1lf\n",base,exp,result);

}
