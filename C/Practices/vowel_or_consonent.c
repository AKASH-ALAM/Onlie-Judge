#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Vowel\n");
    }
    else printf("Consonant\n");
    return 0;
}