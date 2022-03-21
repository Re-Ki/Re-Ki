#include "iostream"
using namespace std;

struct Node{
    int key;
    struct Node *left , *right;
};
struct Node *newNode(char data){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = data;
    node->right = node->left = NULL;
    return node;
}

int nodes(struct Node *root) {

    if (root == NULL){
        return (0);
    }
    return (1+nodes(root->left)+nodes(root->right));
}

bool checkComplete(struct Node *root , int index , int numberNodes){

    if(root == NULL)
        return true;

    if( index >= numberNodes)
        return false;

    return (checkComplete(root->left , 2*index+1 , numberNodes)&&
            checkComplete(root->right , 2*index+2 , numberNodes) );

}

int main(){

    struct Node *root = NULL;
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(9);
    root->right->left = newNode(6);

    int numNodes = nodes(root);
    cout << "number of nodes " << numNodes <<endl;
    int index = 0;

    if(checkComplete(root,index,numNodes)){
        cout << "Complete Binary Tree found :\n";
    }else{
        cout << "Complete Binary Tree not found :\n";
    }

    return 0;
}