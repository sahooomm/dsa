#include<iostream>
using namespace std;

int find_pivot_element(int arr[],int n){

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
        else if(arr[mid]<arr[start]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
}

int main(){

    int arr[] = {12,14,16,2,4,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int pivot_index = find_pivot_element(arr,n);
    cout << "pivot index is:"<<pivot_index<<"and it is:"<<arr[pivot_index]<<endl;

}