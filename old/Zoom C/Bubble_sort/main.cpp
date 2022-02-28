#include<iostream>
#include"stdio.h"

using namespace std;

void bubble_sort1(int a[], int length);
void bubble_sort(int a[],int length);
int main(void){
    int a[]={1,3,7,9,0,2,4,5,8,6};
    int length=10;
    bubble_sort1(a,length);
    for(int i=0; i <length; i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
    bubble_sort(a,length);
    cout<<endl;
    for(int i=0; i <length; i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
    return 0;
}
void bubble_sort1(int a[], int length){
    for(int i=0; i < length; i++){
        for(int j=0; j < (length-1); j++){
            if(a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

}
void bubble_sort(int a[], int length){
    for(int i=0; i < length; i++){
        for(int j=0; j < (length-1); j++){
            if(a[j] < a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

}