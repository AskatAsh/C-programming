#include<stdio.h>
int main(){
    
    long long a,b,c,temp;
    scanf("%lld %lld %lld",&a,&b,&c);
/// 2 -1 -3
/// a  b  c

    long long x,y,z;
    x=a,y=b,z=c;
    if(a>b){
        temp = a; 
        a = b;
        b = temp;
        // a= -1 b= 2
        /// a  b  c
        /// -1 2 -3
    }
    if(b>c){
        temp = b;
        b=c;
        c=temp;
        // b= -3 c= 2
        /// a  b  c
        /// -1 -3 2
    }
    if(a>b){
        temp = a;
        a = b;
        b = temp;
        // a= -3 b= -1
        /// a  b  c
        /// -3 -1 2
    }
    printf("%lld\n%lld\n%lld\n\n",a,b,c);
    printf("%lld\n%lld\n%lld\n",x,y,z);
    return 0;
}