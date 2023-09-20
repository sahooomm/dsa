#include<iostream>
using namespace std;

int first_occurance(int arr[],int n,int key){

    int start = 0;
    int end = n-1;

    int mid = (start+end)/2;
    int ans = -1;
    while(start<=end){

        if(arr[mid] == key){
            
            ans = mid;
            end = mid-1;
            
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int last_occurance(int arr[],int n,int key){

    int start = 0;
    int end = n-1;

    int mid = start+(end-start)/2;
    int ans = -1;

    while(start<=end){
        
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
    
}

int total_occurance(int arr[],int n,int key){

    int first_key_index = first_occurance(arr,n,key);
    int last_key_index = last_occurance(arr,n,key);

    int total_occurance = last_key_index-first_key_index+1;

    return total_occurance;

}
int main(){

    int n;
    cout << "Enter size of array:";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in increasing order:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the key:";
    int key;
    cin >> key; 

    cout << "Total occurance of key is:"<< total_occurance(arr,n,key);

    return 0;

}