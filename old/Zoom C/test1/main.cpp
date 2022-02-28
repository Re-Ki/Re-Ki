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

    head -> data = 10;
    head -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = NULL;

    cout<<"Before push"<<endl;
    dt_print(head);
    cout<<endl;

    push(&head,100);
    cout<<"After push"<<endl;
    dt_print(head);
    cout<<endl;

    push(&head,200);
    cout<<"After push"<<endl;
    dt_print(head);
    cout<<endl;

    append(&head , 111);
    cout<<"After append"<<endl;
    dt_print(head);
    cout<<endl;

    append(&head , 222);
    cout<<"After append2"<<endl;
    dt_print(head);

    return 0;
}

//#include "iostream"
//#define SIZE 10
//using namespace std;
//
//class Node{
//public:
//    int data;
//    Node*next;
//
//};
//
//void push(Node** head_rf , int new_data){
//
//    Node* new_node = new Node();
//    new_node -> data = new_data;
//
//    new_node -> next = (*head_rf);
//    (*head_rf) =  new_node;
//}
//
//void dt_print(Node* node){
//
//    while(node != NULL){
//
//        cout<<node->data<<" "<<endl;
//        node = node -> next ;
//    }
//}
//
//int main(){
//    int arr[10];
//
//    Node*head = NULL;
//
//    head = new Node();
//
//    for(int i=0; i<SIZE; i++){
//        cout<<"Please enter a number :";
//        cin>>arr[i];
//    }
//
//    head -> data = arr[0];
//
//    for (int i=1; i<=SIZE; i++) {
//        push(&head, arr[i]);
//    }
//    dt_print(head);
//
//    return 0;
//}