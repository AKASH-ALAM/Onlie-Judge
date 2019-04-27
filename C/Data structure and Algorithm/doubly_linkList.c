#include <stdio.h>
#include <stdlib.h>
typedef struct doubly_linkList Doubly;
struct doubly_linkList{
    int data;
    Doubly *next;
    Doubly *prev;
};

Doubly *create_node(int value, Doubly *next, Doubly *prev){

    Doubly *new_node = (Doubly*) malloc (sizeof(Doubly));

    if(new_node == NULL){
        printf("Error! Could not create a node");
        exit(1);
    }

    new_node -> data = value;
    new_node -> next = next;
    new_node -> prev = prev;
    return new_node;
}

Doubly *prepend(Doubly *head, int item){
    Doubly *new_node = create_node(item, head, NULL);
    new_node -> next -> prev = new_node;
    return new_node;
}

Doubly *append(int item, Doubly *head){
    Doubly *new_node = create_node(item, NULL, NULL);
    if(head == NULL){
        return new_node;
    }
    Doubly *current_node = head;
    while(current_node -> next != NULL){
        current_node = current_node -> next;
    }
    current_node -> next = new_node;
    new_node -> prev = current_node;
    return head;
}

Doubly *remove_node(Doubly *head, Doubly *node){
    if(node == head){
        head = node -> next;
        head -> prev = NULL;
        free(node);
        return head;
    }
    Doubly *next_node = node -> next;
    Doubly *prev_node = node -> prev;

    prev_node -> next = next_node;
    next_node -> prev = prev_node;
    free (node);
    return head;
}

int main(){
    // I don't know how to implement main function :(
}