#include "stdio.h"

void insertionSort(int arr[],int size){
    int i,j,key;
    for(i=0; i<size; i++){
        j=i;
        while ( j > 0 && arr[j-1] > arr[j]){
            key=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=key;
            j--;
        }
    }
    printf("Sorted array :\n");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={12,6,22,5,17,3,34,1};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,arr_size);

    return 0;
}