#include<stdio.h>
int main()
{
    int a[50],i,n,max=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]<a[j])
        {
            max=a[j];
        }
        }
    }
    printf("%d",max);
    return 0;
}
