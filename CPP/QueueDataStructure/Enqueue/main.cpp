#include "stdio.h"
#include "stdlib.h"
#define MaxQ 10

typedef struct {
// type declaration , init , malloc
    int head,tail;
    int QA[MaxQ];
}Qtype , *Queue;//int a,*b;

Queue initQueue(){

    Queue qp = (Queue) malloc(sizeof(Qtype));
    qp->head = qp->tail = 0;
    return qp;

}

void enqueue(Queue Q,int n){

    if(Q->tail == MaxQ-1){
        Q->tail = 0;

    }else{
        ++(Q->tail);
    }
    if(Q->tail == Q->head){
        printf("\nQueue is full\n");
        exit(1);
    }
    Q->QA[Q->tail] = n;
}

int main(){

    int n=0;
    Queue Q = initQueue();
    printf("Enter a positive integer :");
    scanf("%d",&n);
    while (n > 0){
        enqueue(Q , n%10);
        n = n/10;
    }

    return 0;
}