#include<stdio.h>
int main()
{
    // printf("hello\n");
    int n;
    scanf("%d",&n);
    while(n>=10){
        n /= 10;
    }


    if(n%2 == 0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    
    return 0;
}

    // printf("%d\n",n);