#include "iostream"
using namespace std;

struct Node{
    int key;
    struct Node *left , *right;
};

struct  Node *newNode(char data){

    struct Node *node = (struct Node*) malloc(sizeof(struct Node));
    node -> key  = data;
    node->left = node->right = NULL;
}

bool isFullbinaryTree(struct Node *root){

    if(root == NULL)
        return true;

    if( root->left == NULL && root->right == NULL)
        return true;

    if((root->left) && (root->right))
        return (isFullbinaryTree(root->left))&&
                isFullbinaryTree(root->right);
}

int main(){

    struct Node *root = NULL;
    root = newNode(8);
    root->left = newNode(10);
    root->right = newNode(3);
    root->left->left =newNode(4);
    root->left->right = newNode(2);
    root->left->right->left = newNode(17);
    root->left->right->right = newNode(7);

    if(isFullbinaryTree(root))
        cout<<"Full Binary Tree\n";
    else
        cout<<"Is not Full Binary Tree\n";

    return 0;
}