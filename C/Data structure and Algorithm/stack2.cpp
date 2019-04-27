#include <iostream>
#define size 10
using namespace std;
typedef struct {
    int top;
    int data[size];
} NewStruct;

void push(NewStruct *s, int item){
    if(s->top < size){
        s->data[s->top] = item;
        s->top = s->top + 1; 
    } else {
        cout<<"The Stack is full!"<<endl;
    }
}

int pop(NewStruct *s){
    int item;
    if(s->top == 0){
        cout<<"The Stack is empty!"<<endl;
        return -1;
    } else {
        s->top = s->top - 1;
        item = s->data[s->top];
    }
    return item;
}

int main(){
    NewStruct value;
    int found;
    value.top = 0;
    push(&value, 1);
    push(&value, 2);
    push(&value, 3);
    push(&value, 4);

    found = pop(&value);
    cout<<found<<endl;
    found = pop(&value);
    cout<<found<<endl;
    found = pop(&value);
    cout<<found<<endl;
    found = pop(&value);
    cout<<found<<endl;

    return 0;
}