#include "stdio.h"
#include "stdlib.h"
#define RougeValue -9595
#define stackSize 10

typedef struct{
    int top;
    int st[stackSize];

}StackType , *Stack;

Stack initStack(){

    Stack sp=(Stack)malloc(sizeof(StackType) );

    sp -> top = -1;
    return sp;

}

int main(){

    Stack initStack();

    return 0;
}