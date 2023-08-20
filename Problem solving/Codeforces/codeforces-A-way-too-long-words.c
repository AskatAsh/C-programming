#include <stdio.h>
#include<string.h>
int main()
{
    int t, n, i, len = 0;
    scanf("%d", &t);
    while (t--)
    {
        char ch[100];
        scanf("%s", &ch);
        // for (i = 0; ch[i] != '\0'; i++)
        // {
        //     // printf("%c\n",ch[i]);
        //     len++;
        // }
        len = strlen(ch);
        // printf("%d\n",len);
        if (len > 10)
        {
            printf("%c%d%c\n", ch[0], len - 2, ch[len - 1]);
        }
        else
        {
            printf("%s\n", ch);
        }
        // scanf("\n");
    }

    return 0;
}