//28.Write a C program to check whether a character is uppercase or lowercase alphabet.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Any character:\n");
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z'){
        printf("%c is lowercase.\n",ch);
    }
    else{
        printf("%c is uppercase.\n",ch);
    }
    return 0;
}
