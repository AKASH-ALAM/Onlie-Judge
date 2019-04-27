//27.Write a C program to input any character and check whether it is alphabet, digit or special character.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: \n");
    scanf("%c",&ch);
    if((ch >= 'a') && (ch <= 'z') || (ch >= 'A') && (ch <= 'Z')){
        printf("Alphabet.\n");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("Digit.\n");
    }
    else{
        printf("Special character.\n");
    }
    return 0;
}
