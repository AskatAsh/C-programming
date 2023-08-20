#include<stdio.h>
#include<string.h>
int main()
{
    char str[20] = "wow";
    int i,j,val=1,len;

    len = strlen(str);

    for(i=0;i<len;i++)
    {
        if(str[i] != str[len-i-1])
        {
            val = 0;
            //break;
        }
    }
    if(val == 0)
    {
        printf("%s is not a palindrome.\n",str);
    }
    else
    {
        printf("%s is a palindrome.\n",str);
    }

}
