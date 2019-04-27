//25.Write a C program to check whether a character is alphabet or not.
#include <stdio.h>
int main()
{
    char input;
    scanf("%c",&input);
    if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')){
        printf("Alphabet.\n");
    }
    else{
        printf("Not alphabet.\n");
    }
    return 0;

}
