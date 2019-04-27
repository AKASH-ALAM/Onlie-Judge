//45.Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>
int main()
{
   int i,n,sum = 0;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
    sum+=i;
   }
   printf("%d\n",sum);
   return 0;
}
//using while loop.
#include <stdio.h>
int main()
{
    int i=1,sum=0;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}
