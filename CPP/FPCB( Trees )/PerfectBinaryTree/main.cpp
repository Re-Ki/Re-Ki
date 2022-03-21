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

int depth(Node *node){
    int d = 0;
    while(node != NULL){
        d++;
        node = node->left;
    }
    return d;
}


bool isPerfectBT(struct Node *root,int d,int level = 0) {

    if (root == NULL)
        return true;//terminating point for both recursive fun and root is null

    if (root->left == NULL && root->right == NULL) {
        bool flag;
        if (d == level + 1) {
            flag = true;
        } else {
            flag = false;
        }
        return flag;
    }

    if(root->left == NULL || root->right == NULL){
        return false;
    }

    return isPerfectBT(root->left, d , level+1 )
           && isPerfectBT(root->right, d , level+1);
}

bool isPerfect(Node *root){

    int d = depth(root);
    printf(" depth = %d\n",d);
    return isPerfectBT(root,d);
}

int main(){

    struct Node *root = NULL;
    root = newNode(8);
    root->left = newNode(10);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(2);
    root->right->left = newNode(17);
    root->right->right = newNode(7);

    if(isPerfect(root)){
        cout << "Perfect Binary Tree found \n";
    }else{
        cout << "Perfect Binary Tree not found \n";
    }

    return 0;
}