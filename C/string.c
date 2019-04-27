#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf(" %[^\n]", s);
    printf("%s\n", s);
    return 0;
}