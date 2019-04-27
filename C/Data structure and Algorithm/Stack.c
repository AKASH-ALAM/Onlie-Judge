#include <stdio.h> 
#include <stdlib.h> 

#define size 10

typedef struct{
    int top;
    int *data = (int *) malloc(sizeof(int) * size);
    //int data[size];
} stack;

void push(stack *s, int item){
    if(s->top > size){
        printf("The Stack is full!\n");
        exit(0);
    }
    else {
        s->data[s->top] = item;
        s->top++;
    }
}

void pull(stack s){
    int item;
    if(s.top == 0){
        printf("The Stack is empty!\n");
        exit(0);
    }
    while(s.top > 0){
        s.top--;
        //Why I'm not using here (s.top >= 0) in condition section? Do you catch it?
        printf("%d ", s.data[s.top]);
    }
    printf("\n"); 
}

int main(){
    int item;
    stack my_stack;
    my_stack.top = 0;

    push(&my_stack, 1);
    push(&my_stack, 2);
    push(&my_stack, 3);
    push(&my_stack, 4);

    pull(my_stack);
    
    return 0;
}