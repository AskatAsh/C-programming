#include<stdio.h>
int main(){
    int a,b;
    char op;

    scanf("%d %c %d",&a,&op,&b);

    ///printf("%d %c %d",a,op,b);


    if(op == '+'){
        printf("\n%d",a+b);
    }
    else if(op == '-'){
        printf("\n%d",a-b);
    }
    else if(op == '*'){
        printf("\n%d",a*b);
    }
    else if(op == '/'){
        if(b==0){
            printf("cannot divide by 0");
    }
        else{
            printf("\n%.3f",(float)a/b);
        }
    }
    else if(op == '%'){
        if(b==0){
            printf("cannot divide by 0");
    }
        else{
            printf("\n%d",a%b);
        }
    }
    else{
        printf("\nplease input a valid operator");
    }
}
