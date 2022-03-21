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

    return 0;
}
