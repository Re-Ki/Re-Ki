#include "iostream"
using namespace std;

class Node{
public:
    int data;
    Node*next;

};

void push(Node** head_ref,int new_data){

    Node* new_node = new Node();
    new_node -> data = new_data;

    new_node -> next = (*head_ref);
    (*head_ref) = new_node;

}

void dt_print(Node* node){

    while(node != NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}

int main(){

    Node*head = NULL;
    Node*second = NULL;
    Node*third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

    cout<<"Before push:"<<endl;
    dt_print(head);

    cout<<endl;

    cout<<"After push:"<<endl;
    push(&head,100);
    dt_print(head);

    cout<<endl;

    cout<<"After push2:"<<endl;
    push(&head,200);
    dt_print(head);

    return 0;
}