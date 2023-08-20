#include<stdio.h>
int main(){
    int n,oddcount=0,evencount=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2 != 0){
            printf("%d is odd\t",i);
            oddcount++;
        }
        else{
            printf("%d is even\n",i);
            evencount++;
        }
    }
    printf("\n\n%d odd and\t%d even numbers",oddcount,evencount);
}
