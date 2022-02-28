#include "iostream"
using namespace std;

int Partition(int *arr,int l,int r){
    int pivot=arr[r];
    int i=l;

    for(int j=l; j<r; j++){
        if(arr[j] <= pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[r]);
    return i;

}
void QuickSort(int *arr,int l,int r){
    if(l < r){
        int p= Partition(arr,l,r);
        QuickSort(arr,l,p-1);
        QuickSort(arr,p+1,r);
    }
}
int main(){
    int arr[]={8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,7);
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}