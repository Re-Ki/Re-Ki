#include "iostream"
using namespace std;

class Node{
public:
    int data;
    Node*next;
};

void push(Node** head_ref , int new_data){

    Node* new_node = new Node();
    new_node -> data = new_data;

    new_node -> next = (*head_ref);
    (*head_ref) =  new_node;
}

void append(Node** head_ref , int new_data){

    Node* new_node = new Node();
    Node* last = *head_ref;

    new_node -> data = new_data;
    new_node -> next = NULL;

    if(*head_ref == NULL){

        *head_ref = new_node;
        return;
    }

    while (last -> next != NULL){

        last = last ->next;
    }
    last -> next = new_node;
    return;
}

// int a=NULL; int b = NULL;
// normal pointer stored address of variable
// Node -> next -> Node -> next -> Node -> next -> Node -> next -> NULL;

void insertAfter(Node* prev_node,int new_data){

    if( prev_node == NULL){

        cout<<"Prev_node cannot be null"<<endl;
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;

    new_node->next= prev_node->next;
    prev_node->next=new_node;

}

bool search(Node* head,int key){

    Node* current_node = head;

    while(current_node != NULL){

        if(current_node -> data == key){

            return true;
        }
        current_node = current_node -> next ;
    }

    return false;
}

void dt_print(Node* node){

    while(node != NULL){

        cout<<node -> data<<" ";
        node = node -> next;
    }
}

int main(){

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

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

    push(&head,200);
    cout<<"After push:"<<endl;
    dt_print(head);
    cout<<endl;

    append(&head , 111);
    cout<<"After append:"<<endl;
    dt_print(head);
    cout<<endl;

    append(&head , 222);
    cout<<"After append2:"<<endl;
    dt_print(head);

    cout<<endl;

    insertAfter(second->next,9090);
    cout<<"After insert data:"<<endl;
    dt_print(head);

    cout<<endl;

    int key=222;
    bool check = search(head,key);
    if(check == true){

        cout<<"We found data:"<<key<<endl;
    }else{
        cout<<"We not found data:"<<key<<endl;
    }

    return 0;
}