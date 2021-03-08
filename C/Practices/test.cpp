#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j = 0, length = 0, flag = 1;
    char ch[100],ch2[100];
    scanf("%[^\n]", ch);
    for(i = 0; ch[i] != '\0'; i++)
        length++; 
    for(i = length-1;  i >= 0;  i--) {
        ch2[j] = ch[i];
        j++;
    } 
    for(i = 0; i < length; i++) {
        if(ch[i] != ch2[i]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Palindrome\n");
    else 
        printf("Not Palindrome\n");
    return 0;
}