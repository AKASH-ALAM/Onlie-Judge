//40.Write a C program to print all natural numbers from 1 to n. - using while loop
#include <stdio.h>
int main()
{
    int n,i=1;
    printf("Please Enter any natural number: ");
    scanf("%d",&n);
    while(i <= n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
