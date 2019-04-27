#include<stdio.h>
int main()
{
    int n,i,num,neg = 0,pos = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num < 0)
            neg++;
        else if (num > 0)
            pos++;
    }
    printf("%d %d", pos, neg);
    return 0;
}
