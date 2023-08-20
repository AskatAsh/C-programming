#include<stdio.h>
int main()
{
    int a,b,i,x,gcd;
    scanf("%d %d",&a,&b);

    if(a>b){
        x=a;
    }
    else{
        x=b;
    }
    for(i=x;i>0;i--){
        if(a%i==0 && b%i==0){
            gcd = i;
            break;
        }
    }
    printf("%d",gcd);
    return 0;
}