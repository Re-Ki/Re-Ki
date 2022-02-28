#include"iostream"

int binarySearch(int nums[],int n,int key){//binary search need parameter
    int low=0;
    int high=n-1;

    while(low <= high){
        int mid=(low+high)/2;

        if(key == nums[mid]){
            return mid;
        }
        else if(key < nums[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }

    }
    return -1;
}

int main(){
    int nums[]={2,5,10,11,15,16,17,19,25,30,40};
    int key=0;
    printf("Enter number to search :");
    scanf("%d",&key);
    int arrSize=sizeof(nums)/sizeof(nums[0]);
    int foundIndex= binarySearch(nums,arrSize,key);

    if(foundIndex != -1){
        printf("Index found at %d",foundIndex);
    }else{
        printf("we not found");
    }

    return 0;
}