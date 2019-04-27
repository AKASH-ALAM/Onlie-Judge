#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;

struct node {
    int data;
    Node *left;
    Node *right;
};

Node *create_node(int item){
    Node *new_node = (Node *) malloc (sizeof(Node));
    if(new_node == NULL){
        printf("Could not create A Node!\n");
        exit(1);
    }

    new_node -> data = item;
    new_node -> left = NULL;
    new_node -> right = NULL;
    return new_node;
}

void add_left_child_node(Node *node, Node *left_child){
    node -> left = left_child;
}

void add_right_child_node(Node *node, Node *right_child){
    node -> right = right_child;
}

Node *create_tree(){
    Node *two = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    add_left_child_node(two, seven);
    add_right_child_node(two, nine);

    
    Node *one = create_node(1);
    Node *six = create_node(6);
    add_left_child_node(seven, one);
    add_right_child_node(seven, six);

    
    Node *five = create_node(5);
    Node *ten = create_node(10);
    add_left_child_node(six, five);
    add_right_child_node(six, ten);

    
    Node *eight = create_node(8);
    add_right_child_node(nine, eight);

    
    Node *three = create_node(3);
    Node *four = create_node(4);
    add_left_child_node(eight, three);
    add_right_child_node(eight, four);

    return two;
}

void pre_order(Node *node){
    printf("%d ", node->data);
    if(node->left != NULL){
        pre_order(node->left);
    }
    if(node->right != NULL){
        pre_order(node->right);
    }
}

int main(){
    Node *root = create_tree();
    
    printf("Root Node : %d\n", root->data);
    pre_order(root);

    return 0;
}