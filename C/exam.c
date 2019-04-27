#include <stdio.h>
int main ()
{
    int i,n,a;
    printf("please Enter a value How many time you print: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        printf("print = %d\n",a);
    }


    return 0;
}
