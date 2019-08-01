#include<stdio.h>
int main()
{
    char s[50];
    int i,c=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(!(s[i]>='a'&&s[i]<='z'))
        {
            c++;
        }
    }
    printf("%d",c-1);
    return 0;
}
