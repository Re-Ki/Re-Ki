#include "stdio.h"
void bubbleSort(int arr[],int size){
    int i,j,temp;
    for(i=0; i<size; i++){
        for(j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int x=0; x<size; x++){
        printf("%d ",arr[x]);
    }
}
int main(){
    int arr[20],n,i,j;
    printf("Please enter the size of arr : ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Please enter element : ");
        scanf("%d",&arr[i]);
    }
    printf("This is your Given element : \n");
    for(j=0; j<n; j++){
        printf("%d ",arr[j]);
    }

    printf("\nSorted array :\n");
    bubbleSort(arr,n);

    return 0;
}