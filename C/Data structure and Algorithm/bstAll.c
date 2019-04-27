#include <stdio.h> 
#include <stdlib.h>
typedef struct node Node;

struct node {
    int data;
    Node *parent, *left, *right;
};

Node *create_node(int item){
    Node *new_node = (Node*) malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Error! Could not create A Node!\n");
    }

    new_node -> data = item;
    new_node -> left = NULL;
    new_node -> parent = NULL;
    new_node -> right = NULL;

    return new_node;
}

void  add_left_child(Node *node, Node *child){
    node -> left = child;
    if(child != NULL){
        child -> parent = node;
    }
}

void add_right_child(Node *node, Node *child){
    node -> right = child;
    if(child != NULL){
        child -> parent = node;
    }
}

Node *bst_insert(Node *root, Node *node){
    if(root == NULL){
        root = node;
        return root;
    }

    Node *current_node = root, *parent_node = NULL;
    
    while(current_node != NULL){
        parent_node = current_node;
        if(node -> data < current_node -> data){
            current_node = current_node -> left;
        } else {
            current_node = current_node -> right;
        }
    }
    
    if(node -> data < parent_node -> data){
        add_left_child(parent_node, node);
    } else {
        add_right_child(parent_node, node);
    }
    return root;
}

Node *bst_create(){
    Node *root, *node;
    root = create_node(10);

    int i, array[] = {5, 17, 3, 7, 12, 19, 1, 4, 13};

    for(i = 0; i < 9; i++){
        node = create_node(array[i]);
        root = bst_insert(root, node);
        //bst_insert(root, node);
    }
    return root;
}

void in_order(Node *node){
    if(node -> left != NULL){
        in_order(node -> left);
    }

    printf("%d ", node -> data);

    if(node -> right != NULL){
        in_order(node -> right);
    }
}
Node *bst_search(Node *root, int item){
    Node *node = root;
    while(node != NULL){
        if(node -> data == item){
            return node;
        }

        if(item < node -> data){
            node = node -> left;
        } else {
            node = node -> right;
        }
    }
    return node;
}

Node *bst_minimum(Node *root){
    Node *node = root;
    while(node -> left != NULL){
        node = node -> left;
    }
    return node;
}



Node *bst_transplant(Node *root, Node *dlt_node, Node *new_node){
    if(dlt_node == root){
        root = new_node;
    }
    else if(dlt_node == dlt_node -> parent -> left){
        add_left_child(dlt_node->parent, new_node);
    } else {
        add_right_child(dlt_node->parent, new_node);
    }
    return root;
}

Node *bst_delete(Node *root, Node *node){
    if(node -> left == NULL){
        root = bst_transplant(root, node, node -> right);
    }
    else if(node -> right == NULL){
        root = bst_transplant(root, node, node -> left);
    } else {

        Node *sm = bst_minimum(node -> right);

        if(sm -> parent != node){
            root = bst_transplant(root, sm, sm->right);
            add_right_child(sm, node->right);
        }
        root = bst_transplant(root, node, sm);
        add_left_child(sm, node->left);
    }
    free(node);
    return root;
}


 
int main(){
    Node *root = bst_create();
    in_order(root);
    printf("\n");

    Node *node = bst_search(root, 10);
    printf("Will delete Node : %d\n", node -> data);
    root = bst_delete(root, node);
    in_order(root);
    return 0;
}