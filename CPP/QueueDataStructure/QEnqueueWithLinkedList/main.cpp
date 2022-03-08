#include "stdio.h"
#include "stdlib.h"

typedef struct {
    int num;
}QueueData;

typedef struct node{
    QueueData data;
    struct node *next;

}Node , *NodePtr;

typedef struct queueType{
    NodePtr head,tail;

}QueueType , *Queue;

Queue initQueue(){
    Queue qp = (Queue)malloc(sizeof(QueueType));
    qp -> head = NULL;
    qp -> tail = NULL;
    return qp;
}

int empty(Queue Q){
    return (Q->head == NULL);
}

void enqueue(Queue Q,QueueData d){

    NodePtr np=(NodePtr) malloc(sizeof(Node));
    np->data = d;
    np->next = NULL;

    if(empty(Q)){

        Q->head = np;
        Q->tail = np;

    }else{
        Q->tail->next = np;
        Q->tail = np;

    }

}

int main(){

    int n=0;
    QueueData temp;
    Queue Q = initQueue();
    printf("Enter a positive integer :");
    scanf("%d",&n);
    while( n > 0){
        temp.num = n %10;
        enqueue(Q , temp);
        n = n /10;
    }


    return 0;
}