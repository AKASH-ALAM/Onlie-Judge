#include <stdio.h>
#define size 100

int isbalance(char input[]){
    int top = 0, i;
    char stack[size];

    for(i = 0; input[i] != '\0'; i++){
        if(input[i] == '(' || input[i] == '{' || input[i] == '['){
            stack[top] = input[i];
            top++;
        } else if(input[i] == ')' || input[i] == '}' || input[i] == ']'){
            if(top == 0){
                return 0;
            }
            else if(stack[top-1] == '[' && input[i] == ']'){
                top--;
            }
            else if(stack[top-1] == '(' && input[i] == ')'){
                top--;
            }
            else if(stack[top-1] == '{' && input[i] == '}'){
                top--;
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
    char input[size];
    scanf("%s", input);
    if(isbalance(input)){
        printf("%s is balanced\n", input);
    } else
        printf("Not Balanced!\n");
    return 0;
}