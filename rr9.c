#include<stdio.h>
int main()
{
    char s[50];
    int i,c=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='.')
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
