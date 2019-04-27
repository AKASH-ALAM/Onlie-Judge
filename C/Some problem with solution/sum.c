#include <stdio.h>
int main()
{
    int i,sum=0,n;
    for(i=1;scanf("%d",&n)!=EOF;i++)
    {
        sum=sum+n;
    }
    printf("%d",sum);
}

