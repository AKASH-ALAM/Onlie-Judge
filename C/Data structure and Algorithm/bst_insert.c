#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;

struct node {
    int data;
    Node *parent;
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
    new_node -> parent = NULL;
    new_node -> left = NULL;
    new_node -> right = NULL;
    return new_node;
}

void add_left_child_node(Node *node, Node *left_child){
    node -> left = left_child;
    if(left_child != NULL){
        left_child -> parent = node;
    }
}

void add_right_child_node(Node *node, Node *right_child){
    node -> right = right_child;
    if(right_child != NULL){
        right_child -> parent = node;
    }
}

Node *bst_insert(Node *root, Node *node){
    Node *parent_node, *current_node;
    if(root == NULL){
        root = node;
        return root;
    }
    parent_node = NULL;
    current_node = root;
    while(current_node != NULL){
        parent_node = current_node;
        if(node -> data < current_node->data){
            current_node = current_node -> left;
        } else {
            current_node = current_node -> right;
        }
    }

    if(parent_node -> data < node -> data){
        add_right_child_node(parent_node, node);
    } else {
        add_left_child_node(parent_node, node);
    }
    return root;
}

Node *bst_create(){
    Node *root, *node;
    int i, array[] = {5, 17, 3, 7, 12, 19, 1, 4};
    root = create_node(10);
    for(i = 0; i < 8; i++){
        node = create_node(array[i]);
        root = bst_insert(root, node);
    }
    return root;
}

void post_order(Node *node){
    
    if(node->left != NULL){
        post_order(node->left);
    }
    printf("%d ", node->data);
    if(node->right != NULL){
        post_order(node->right);
    }
}

Node *bst_search(Node *root, int item){
    Node *temp_node = root;
    while(temp_node != NULL){
        if(temp_node -> data == item){
            return temp_node;
        }
        if(temp_node -> data > item){
            temp_node = temp_node -> left;
        } else {
            temp_node = temp_node -> right;
        }
    }
    return temp_node;
}

Node *bst_minimum(Node *root){
    Node *node = root;
    while(node -> left != NULL){
        node = node->left;
    }
    return node;
}

int main(){
    Node *root = bst_create();
    Node *new_node = create_node(13);
    root = bst_insert(root, new_node);
    post_order(root);
    printf("\n");

    Node *node = bst_search(root, 7);
    if(node != NULL){
        printf("%d\n", node -> data);
    } else {
        printf("Node not found!\n");
    }

    node = bst_search(root, 8);
    if(node != NULL){
        printf("%d\n", node -> data);
    } else {
        printf("Node not found!\n");
    }
    node = bst_minimum(root);
    printf("Most small Node : %d\n", node -> data);
    return 0;
}