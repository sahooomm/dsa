#include<iostream>
using namespace std;

int binarySearch(int arr[],int target,int start,int end){

    
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

int find_pivot_index(int arr[],int n){
    
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start<=end){

        if(start == end){
            return start;
        }
        else if(mid-1 >= 0 && arr[mid]<arr[mid-1]){
            return mid-1;
        }
        else if(mid+1 < n && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[start]>arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

int search_in_sorted_and_rotated(int arr[],int n,int target){

    int pivot_index = find_pivot_index(arr,n);
    int ans = -1;

    if(target >= arr[0] && target <= arr[pivot_index] ){

        ans = binarySearch(arr,target,0,pivot_index);
        
    }
    else{
        ans = binarySearch(arr,target,pivot_index+1,n-1);
    }
    return ans;
}

int main(){

    int arr[] = {12,14,16,2,4,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 16;

    int answer_index = search_in_sorted_and_rotated(arr,n,target);

    cout << "Hence, the index of the target is:"<<answer_index<<endl;

}