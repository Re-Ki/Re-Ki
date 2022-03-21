#include "stdio.h"
#include "stdlib.h"
#define RougeValue -9595
#define stackSize 10

typedef struct {

    int top;
    int st[stackSize];

}StackType , *Stack;

Stack initStack(){

    Stack sp =(Stack)malloc(sizeof(StackType) );

    sp -> top = -1;
    return sp;

}

int empty(Stack S){

    return (S->top == -1);
}

void push(Stack S,int n){

    if(S->top == stackSize-1){
        printf("\n Stack OverFlow\n");
        exit(1);
    }
    ++(S->top);
    S -> st[S->top] = n;
}

int pop(Stack S){

    if(empty(S)){
        return RougeValue;
    }
    int hold = S->st[S->top];
    --(S->top);
    return hold;

}

int main(){

    Stack initStack();
    int empty(Stack);
    void push(Stack , int );
    int pop(Stack);
    int n=0;

    Stack S=initStack();
    printf("Press 0 if you want to quit or push some data integers:");
    scanf("%d",&n);
    while ( n != 0){
        push(S,n);
        scanf("%d",&n);
    }

    printf("Data are in LIFO last in first out\n");

    while(!empty(S)) {
        printf("%d", pop(S));
        printf("\n");

    }
    return 0;
}