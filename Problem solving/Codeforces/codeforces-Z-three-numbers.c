#include<stdio.h>
int main()
{
    int k,s,count,i,first,second;
    scanf("%d",&s);

    for(i=0;i<=s;i++){
        if(s==0){
            first = 0;
            printf("%d ",first+1);
        }
        else if(s==1){
            second = 3;
            printf("%d ",second);
        }
        else{
            count = first + second;
            first = second;
            second = count;
            printf("%d ",count);
        }
    }
    return 0;
}