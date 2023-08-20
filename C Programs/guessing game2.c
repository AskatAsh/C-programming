#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,players,num,guess,count,score[10];
    int winner,winScore;
    printf("How many players..? => ");
    scanf("%d",&players);

    for(i=0; i<players; i++)
    {
        srand(time(0));
        num = rand()%100 + 1;
        //printf("The number is %d\n",num);
        //printf("Guess the number between 1 and 100:\n");

        printf("Turn of player %d\n",i+1);
        printf("Guess the hidden number between 1 and 100:\n");
        count=1;

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
                printf("You guessed after %d tries!\n\n",count);
            }
            count++;

        }
        while(guess != num);
        score[i] = count-1;
    }
    winScore = score[0];
    for(i=0; i<players; i++)
    {
        if(winScore > score[i])
        {
            winScore = score[i];
            winner = i;
        }
        printf("Player %d = %d tries\n",i+1,score[i]);
    }
    printf("\n");
    printf("With %d tries the winner is player %d..!\n",winScore,winner+1);
}

