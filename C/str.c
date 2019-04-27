
#include<stdio.h>
#include <string.h>
int main()
{
    char s[40]="bangladesh ";
    char s1[30]="nepal is a small country";
    strcpy(s+10,s1+5);
    printf("%s",s);
}
