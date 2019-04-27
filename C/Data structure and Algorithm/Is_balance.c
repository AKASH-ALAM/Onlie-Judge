#include <stdio.h>

int is_balance(char input[]){
    char input2[100], last_char;
    int top = 0, i;
    for(i = 0; input[i] != '\0'; i++){
        if(input[i] == '('){
            input2[top] = '(';
            top++;
        } else if(input[i] == ')'){
            if(top == 0){
                return 0;
            }
            top--;
            last_char = input2[top];
            if(last_char != '('){
                return 0;
            }
        }
    }
    if(top == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    char input[100];
    scanf("%s", input);
    if(is_balance(input)){
        printf("Balance\n");
    } else 
        printf("Not Balance!\n");
    return 0;
}