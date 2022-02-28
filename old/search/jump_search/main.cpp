#include "iostream"
#include "cmath"
using namespace std;

int jumpSearch(int arr[],int size,int key){
    int start=0;
    int jumpSize=sqrt(size);
    while(arr[jumpSize] <= key && jumpSize < size){
        start=jumpSize;
        jumpSize+=sqrt(size);
        if(jumpSize > size-1){
            jumpSize=size;
        }
    }
    for(int i=start; i<jumpSize; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={3,5,8,12,17,22,34,68,90,100,134};
    int key=0;
    cout<<"Please enter a number to search:";
    cin>>key;

    int size=sizeof(arr)/sizeof(arr[0]);
    int foundIndex=jumpSearch(arr,size,key);
    if(foundIndex != -1){
        cout<<"We found data at index :"<<foundIndex;
    }else{
        cout<<"We cannot found";
    }

    return 0;
}