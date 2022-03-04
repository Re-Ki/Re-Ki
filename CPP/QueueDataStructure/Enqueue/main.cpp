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


}

int main(){

    int n=0;
    Queue Q = initQueue();
    printf("Enter a positive integer :");
    scanf("%d",&n);
    while (n > 0){
        enqueue(Q , n%10);

    }


    return 0;
}
