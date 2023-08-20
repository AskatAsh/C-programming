#include<stdio.h>
int main()
{
    long long a,b,c,sum,sub,product;
    char s,q;
    scanf("%lld %c %lld %c %lld",&a,&s,&b,&q,&c);
    printf("%lld %c %lld %c %lld\n",a,s,b,q,c);

    if(s == '+'){
        sum = a + b;
        if(sum == c){
            printf("Yes\n");
        }
        else{
            printf("%lld\n",sum);
        }
    }
    else if(s == '-'){
        sub = a - b;
        if(sub == c){
            printf("Yes\n");
        }
        else{
            printf("%lld\n",sub);
        }
    }
    else if(s == '*'){
        product = a * b;
        if(product == c){
            printf("Yes\n");
        }
        else{
            printf("%lld\n",product);
        }
    }

return 0;
}