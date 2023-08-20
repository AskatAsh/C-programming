#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,guess,count=1;
    srand(time(0));
    num = rand()%100 + 1;
    //printf("The number is %d\n",num);
    printf("Guess the number between 1 and 100:\n");

    do
    {
        //printf("Guess the number between 1 and 100\n");
        scanf("%d",&guess);

        if(guess<num)
        {
            printf("Guess a higher number please!\n");
        }
        else if(guess>num)
        {
            printf("Guess a lower number please!\n");
        }
        else
        {
            printf("You guessed after %d tries!\n",count);
        }
        count++;

    }while(guess != num);
}
