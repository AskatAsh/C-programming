#include<stdio.h>
int main(){
    int a,b,c,min,max;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        max = a;
        if(b<c){
            min = b;
        }
        else{
            min = c;
        }
    }
    else if(b>a && b>c){
        max = b;
        if(a<c){
            min = a;
        }
        else{
            min = c;
        }
    }
    else{
        max = c;
        if(b<a){
            min = b;
        }
        else{
            min = a;
        }
    }
    printf("%d %d",min,max);
}