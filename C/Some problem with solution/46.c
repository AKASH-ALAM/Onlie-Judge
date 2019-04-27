//46.Write a C program to find sum of all even numbers between 1 to n.

#include <stdio.h>
int main()
{
   int i,n,sum = 0;
   scanf("%d",&n);
   for(i=0;i<=n;i=i+2){
    sum+=i;
   }
   printf("%d\n",sum);
   return 0;
}
