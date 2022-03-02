#include "iostream"
using namespace std;

class Node{
public:
    int data;
    Node*next;
};


void push(Node** head_ref,int new_data){

    Node* new_node = new Node();
    new_node->data = new_data;

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void append(Node** head_ref,int new_data){

    Node* new_node = new Node();
    Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;
    
    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
    return;
}

void insertAfter(Node* prev_node,int new_data){

    if(prev_node == NULL){
        cout<<"Prev_node cannot be NULL"<<endl;
    }
    Node* new_node = new Node();
    new_node->data = new_data;

    new_node->next = prev_node->next;
    prev_node->next = new_node;

}

bool search(Node* head,int key){
    Node* current_node = head;

    if(current_node != NULL){
        while (current_node->data == key){
            return true;
        }
        current_node = current_node->next;
    }
    return false;
}

void deleteNode(Node** head_ref,int key) {

    Node *prev = NULL;
    Node *temp = *head_ref;

    if (*head_ref != NULL && temp->data == key) {

        *head_ref = temp->next;
        delete temp;
        return;
    }else{
        while (temp != NULL && temp->data != key){
            prev = temp;
            temp = temp->next;
        }
        if(temp == NULL){
            return;
        }
        prev->next = temp->next;
        delete temp;
    }

}

void dt_print(Node* node){
    while (node != NULL){
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

    push(&head,100);
    cout<<"After push:"<<endl;
    dt_print(head);
    cout<<endl;

    append(&head,200);
    cout<<"After append:"<<endl;
    dt_print(head);
    cout<<endl;

    insertAfter(second->next,300);
    cout<<"After insert data:"<<endl;
    dt_print(head);
    cout<<endl;

    int key=300;
    bool check=search(head,key);
    if(check == true){
        cout<<"We found data:"<<key<<endl;
    }else{
        cout<<"We not found data:"<<key<<endl;
    }

    int dkey=200;
    deleteNode(&head,dkey);
    cout<<endl;
    cout<<"After delete data:"<<endl;
    dt_print(head);

    return 0;
}