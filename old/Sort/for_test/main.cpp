#include"stdio.h"
//    int myArr[12]={1,2,3,4,5,6,7,8,9,10,11};
//    int arrSize=sizeof(myArr)/sizeof(myArr[0]);
//
//    printf("size of the whole array : %d\n",sizeof(myArr));
//    printf("size of each room : %d\n",sizeof(myArr[0]));
//    printf("Size of our array %d\n",arrSize);
//
//     int i=0;
//    for( i = 0; i < arrSize; i++){
//
//        printf("Array data : %d\n",myArr[i]);
//
//    }
int average(int arr[],int arrSize){
    int i=0;
    int totalSum=0;
    for(i=0; i<arrSize; i++){
        totalSum +=arr[i];
    }
    int average=totalSum/arrSize;
    return average;
}
int main(){
    int arrSize=0;
    int i=0;
    printf("Please enter number of data :");
    scanf("%d",&arrSize);
    printf("Size of array %d\n",arrSize);
    int myArr[arrSize];

    for(i=0; i <arrSize; i++){
        printf("enter data for %d index : ",i);
        scanf("%d",&myArr[i]);
    }
    int averageReturn= average(myArr,arrSize);
    printf("Our average is : %d",averageReturn);

    return 0;
}