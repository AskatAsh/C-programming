#include<stdio.h>

void goodMorning();
void goodNoon();
void goodAfternoon();
void goodNight();
int main()
{
    goodMorning();

    return 0;
}
void goodMorning()
{
    printf("Good Morning Askat.\n");
    goodNoon();
}
void goodNoon()
{
    printf("Good Noon Askat.\n");
    goodAfternoon();
}
void goodAfternoon()
{
    printf("Good Afternoon Askat.\n");
    goodNight();
}
void goodNight()
{
    printf("Good Night Askat.\n");
}
