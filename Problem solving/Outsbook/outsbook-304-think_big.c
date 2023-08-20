#include<stdio.h>
int main(){
    unsigned long long n,rem,result;
    scanf("%llu",&n);
    result = ((((((((((n*567)-357)+7492)*9879)-4787)*7493)-498)*1237)+100)*9879)-9;
    rem = result % 100;
    printf("\n");
    printf("%02llu\n",rem);
}