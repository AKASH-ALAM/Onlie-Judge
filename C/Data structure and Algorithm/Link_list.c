#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;

struct node{
    int data;
    Node *next;
};
Node *head = NULL;

Node *create_node(int item, Node *next){
    Node *new_node = (Node*) malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Error! Could not create a Node\n");
        exit(1);
    }
    new_node -> data = item;
    new_node -> next = next;
    return new_node;
}

void prepend(int item){
    Node *new_node = create_node(item, NULL);
    if(head == NULL){
        head = new_node;
    } else {
        Node *temp = head;
        new_node -> next = temp;
        head = new_node;
    }
}

void append(int item){
    Node *new_node = create_node(item, NULL);
    if(head == NULL){
        head = new_node;
    } else {
        Node *find_next = head;
        while(find_next->next != NULL){
            find_next = find_next -> next;
        }
        find_next->next = new_node;
    }
}

void print_node(Node *head){
   Node *current_node = head;
   while(current_node != NULL){
       printf("%d ", current_node->data);
       current_node = current_node -> next;
   }
    printf("\n");
}

int count(Node *head){
    Node *end_node = head;
    int cnt = 0;
    while(end_node != NULL){
        end_node = end_node -> next;
        cnt++;
    }
    return cnt;
}

Node *search(Node *head, int item){
    Node *find_node = head;
    while(find_node->next != NULL){
        if(find_node -> data == item){
            return find_node;
        }
        find_node = find_node -> next;
    }
    if(find_node->next == NULL){
        printf("Node Not Found!\n");
        exit(1);
    }
}

void remove_node(int n){
    Node *temp1, *temp2, *Next_node = head;
    int i = 1;
    if(n == 1){
        Node *temp = head;
        head = temp->next;
        free(temp);
    } else{
        while(i <= n-2){
            Next_node = Next_node -> next;
            i++;
        }

        temp1 = Next_node->next;
        temp2 = temp1 -> next;
        Next_node -> next = temp2;
        free(temp1);
    }
    
}

void short_node(int lenth){
    int temp;
    Node *first = head, *second = head -> next;
    while(lenth--){
        while(first->next != NULL){
            if(first->data > second->data){
                temp = first->data;
                first->data = second->data;
                second->data = temp;
            }
            first = first -> next;
            second = second -> next;
        }
        first = head, second = head -> next;
    }
    
}

void Add_node(int item){
    Node *new_node = create_node(item, NULL);
    Node *f_data = head, *s_data = head -> next;
    if(item <= head->data){
        new_node -> next = f_data;
        head = new_node;
    } else {
        while(f_data -> next != NULL){
            if(f_data -> data <= item && s_data -> data > item){
                Node *temp = f_data -> next;
                f_data -> next = new_node;
                new_node -> next = temp;
                break;
            
            }
            f_data = f_data -> next;
            s_data = s_data -> next;
        }
    }
}

int main(){
    
    
    prepend(1);
    prepend(2);
    //prepend(3);
    append(5);
    append(6);
    append(4);
    prepend(8);
    prepend(7);

    int lenth = count(head);
    printf("The Number of Node: %d\n",lenth);

    /* Node *found = search(head, 3);
    printf("Data of Node: %d\n", found->data); */
    print_node(head);

    printf("Sorted Node: ");
    short_node(lenth);
    print_node(head);
    Add_node(0);
    printf("Added A Node: ");
    print_node(head);

    /* remove_node(7);
    print_node(head); */

    lenth = count(head);
    printf("The Number of Node: %d\n",lenth);
    return 0;
}