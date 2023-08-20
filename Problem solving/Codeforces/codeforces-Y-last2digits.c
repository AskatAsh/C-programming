#include<stdio.h>
int main()
{
    int a,b,c,d,rem,multi;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;

    multi = a*b*c*d;
    printf("%d\n",multi);
    rem = multi % 100;
    if(rem<=9){
        printf("0");
        printf("%d\n",rem);
    }
    else{
        printf("%d\n",rem);
    }
    
    return 0;
}