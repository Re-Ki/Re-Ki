#include<stdio.h>

void insertionSort(int arr[],int n){
    int i,j,key;
    for(i=1; i<n; i++){
        j=i;
        while(j > 0 && arr[j-1] > arr[j]){
            key=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=key;
            j--;
        }
    }
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[10],n,i,j;
    printf("Please enter the size of array :");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Please enter element :");
        scanf("%d",&arr[i]);
    }

    printf("\nThis is your Given element :\n");
    for(j=0; j<n; j++){
        printf("%d ",arr[j]);
    }

    printf("\nSorted array :\n");
    insertionSort(arr,n);

    return 0;
}