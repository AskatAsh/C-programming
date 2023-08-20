#include<stdio.h>
int main()
{
    char str[30],ch;

    int i,vowel,consonant,digit,word=1,letter,other,space=0;
    i=vowel=consonant=digit=letter=other=0;

    printf("Enter a string: ");
    gets(str);
    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch == 'o' || ch == 'u' ||
           ch=='A' || ch=='E' || ch=='I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            consonant++;
        }
        else if(ch>='0' && ch<='9')
        {
            digit++;
        }
        else if(ch == ' ')
        {
            space++;
            word++;
        }
        else
        {
            other++;
        }
        letter++;
        i++;
    }
    printf("\nNumber of vowels: %d\n",vowel);
    printf("Number of consonants: %d\n",consonant);
    printf("Number of digits: %d\n",digit);
    printf("Number of words: %d\n",word);
    printf("Number of letters: %d\n",letter-space);
    printf("Number of other symbols: %d\n",other);
}
