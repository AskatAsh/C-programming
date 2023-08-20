#include<stdio.h>
int main()
{
    typedef char letter;
    letter ch;
    ch = 'A';

    printf("typedef letter ch = %c\n",ch);

    letter alpha;
    printf("Enter a letter: ");
    scanf("%c",&alpha);
    printf("typedef letter alpha = %c\n",alpha);
}
