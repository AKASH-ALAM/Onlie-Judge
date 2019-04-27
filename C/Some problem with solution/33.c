//33.Write a C program to input all sides of a triangle and check whether triangle is valid or not.

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Input all sides of a triangle.\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && c+b>a){
        printf("Triangle is valid.\n");
    }
    else{
        printf("Triangle is invalid.\n");
    }
    return 0;
}
