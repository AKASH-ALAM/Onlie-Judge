#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node {
    int data;
    Node *prev;
    Node *next;
};
Node *head = NULL;

Node *create_node(Node *prev, int item, Node *next){
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Could not Create A Node!\n");
        exit(1);
    }
    new_node -> data = item;
    new_node -> prev = prev;
    new_node -> next = next;
}

void prepend(int item){
    Node *new_node = create_node(NULL, item, NULL);
    if(head == NULL){
        head = new_node;
    } else {
         Node *temp = head;
         new_node->next = temp;
         temp->prev = new_node;
         head = new_node;
    }
}

void append(int item){
    Node *new_node = create_node(NULL, item, NULL);
    if(head == NULL){
        head = new_node;
    } else {
        Node *current_node = head;
        while(current_node -> next != NULL){
            current_node = current_node -> next;
        }
        current_node -> next = new_node;
        new_node -> prev = current_node;
    }
}

void remove_node(int item){
    if(item == head -> data){
        Node *temp = head;
        head = head -> next;
        head -> prev = NULL;
        free(temp);
    } else {
        Node *current_node = head;
        while(current_node != NULL){
            if(current_node -> data == item){
                break;
            }
            current_node = current_node -> next;
        }
        if(current_node == NULL){
            printf("Node not found!\n");
        }
        Node *A, *B;
        A = current_node -> prev;
        B = current_node -> next;
        A -> next = B;
        B -> prev = A;
        free(current_node);
    }
}

void print_node(){
    Node *current_node = head;
    while(current_node != NULL){
        printf("%d ", current_node -> data);
        current_node = current_node -> next;
    }
    printf("\n");
}


int main(){
    append(1);
    append(2);
    append(4);
    append(5);
    append(6);
    prepend(1);
    prepend(2);
    prepend(4);
    prepend(5);
    prepend(6);
    print_node();

    remove_node(6);
    print_node();

    return 0;
}