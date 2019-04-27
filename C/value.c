#include <stdio.h>

int main()
{
   int a = 30,*y;
   y = &a;
   printf("%p\n",y);
   printf("%d",*y);
}
