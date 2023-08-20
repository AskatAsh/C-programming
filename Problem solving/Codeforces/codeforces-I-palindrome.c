#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    scanf("%d",&num);
    int x = num;
    while(num != 0){
        rem = num%10;
        num = num/10;
        // printf("%d\n",rem);
        sum = sum*10 + rem;
    }
    printf("%d\n",sum);
    if(x == sum){
        printf("YES"); // Palindrome
    }
    else{
        printf("NO"); // Not Palindrome
    }
    return 0;
}