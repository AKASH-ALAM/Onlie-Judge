//47.Write a C program to find sum of all odd numbers between 1 to n.

#include <stdio.h>
int main()
{
   int i=1,sum=0;
  for(;i<=10;i++){
    if(i%2==1)
    sum=sum+i;
   }
    printf("%d\n",sum);

   return 0;
}
