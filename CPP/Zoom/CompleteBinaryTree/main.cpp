#include "iostream"
using namespace std;

struct Node{
    int key;
    struct Node *left,*right;
};

struct Node *newNode(char k){
    struct Node *node = (struct Node *) malloc(sizeof(struct Node));
    node->key = k;
    node->right = node->left = NULL;
    return node;

}

int countNumNodes(struct Node *root){
    if(root == NULL)
        return (0);

    return(1 + countNumNodes(root->left) + countNumNodes(root->right));
}

bool checkComplete(struct Node *root,int index,int numberNodes){
        if(root == NULL)
        return true;

    if(index >= numberNodes)
        return false;

    return(checkComplete(root->left, 2 * index + 1,numberNodes) && checkComplete(root->right, 2 * index + 2,numberNodes));
}

int main(){

    struct Node *root = NULL;
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    int node_count = countNumNodes(root);
    int index = 0;

    if(checkComplete(root,index,node_count))
        cout<<"The Tree is a Complete Binary Tree\n";
    else
        cout<<"The Tree is not a Complete Binary Tree\n";

    return 0;
}