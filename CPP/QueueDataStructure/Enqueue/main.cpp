//#include "stdio.h"
//#include "stdlib.h"
//#define MaxQ 10
//
//typedef struct {
//// type declaration , init , malloc
//    int head,tail;
//    int QA[MaxQ];
//}Qtype , *Queue;//int a,*b;
//
//Queue initQueue(){
//
//    Queue qp = (Queue) malloc(sizeof(Qtype));
//    qp->head = qp->tail = 0;
//    return qp;
//
//}
//
//void enqueue(Queue Q,int n){
//
//
//}
//
//int main(){
//
//    int n=0;
//    Queue Q = initQueue();
//    printf("Enter a positive integer :");
//    scanf("%d",&n);
//    while (n > 0){
//        enqueue(Q , n%10);
//
//    }
//
//
//    return 0;
//}

#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;

int main(){

    char* name;
    char* commit;
    name = new char[500];
    commit = new char[500];
//    commit = "";
//    name ="git status";
    cout<<"Enter commit :";
    gets(name);

    strcpy(commit,"git status && git add --all && git commit -m \"");

    strcat(commit,name);
    strcat(commit,"\" && git push -u origin main && git pull origin main");

    cout<<commit;

//    name ="git status && git add --all && git commit -m '"+com+"' && git push -u origin main && git pull origin main";

    system(commit);

    return 0;
}