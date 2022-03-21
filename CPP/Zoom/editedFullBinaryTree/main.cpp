#include "iostream"
using namespace std;

struct Node{
    int key;
    struct Node *left,*right;
};

struct Node *newNode(char k){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = k;
    node->right = node->left = NULL;
    return node;
}

bool isFullBinaryTree(struct Node *root){

    if(root == NULL)
        return true;

    if(root->left == NULL && root->right == NULL)
        return true;

    if((root->left) && (root->right))
        return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));

    return false;
}

int main(){

    struct Node *root = NULL;
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->right->right = newNode(9);
    root->left->left = newNode(4);
    root->left->left->right = newNode(8);
    root->left->right = newNode(5);
    root->left->right->left = newNode(6);
    root->left->right->right= newNode(7);

    if(isFullBinaryTree(root))
        cout << "The Tree is a Full Binary Tree\n";
    else
        cout << "The Tree is not a Full Binary Tree\n";

    return 0;
}