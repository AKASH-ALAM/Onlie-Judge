#include<stdio.h>
int akash();
int main()
{
        int sum = akash();
        printf("%d",sum);
}
int akash(){
    int i,n;
    scanf("%d",&n);
    int sum = 1;
    for (i = 1; i <= n; i++){
        sum = sum * i;
    }
    return sum;
}
