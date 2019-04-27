#include <stdio.h>
#include <string.h>

int is_balanced(char input[]){
    char stack[100], last_char;
    int top, i, len;
    top = 0;
    len = strlen(input);

    for(i = 0; i < len; i++){
        if(input[i] == '('){
            stack[top] = '(';
            top++;
        } else if(input[i] == ')'){
            if(top == 0){
                // stack empty
                return 0;
            } 
            top--;
            last_char = stack[top];
            if(last_char != '('){
                return 0;
            }
        }
    }
    if (top == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    char input[100];
    scanf("%s", input);
    if(is_balanced(input)){
        printf("%s is balanced\n",input);
    } else {
        printf("%s is not balanced\n", input);
    }
    return 0;
}