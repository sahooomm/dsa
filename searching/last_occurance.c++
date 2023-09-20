#include<iostream>
using namespace std;


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

    int last_key_index = last_occurance(arr,n,key);

    cout << "Last occurance of key is at index:" << last_key_index << endl;

    return 0;

}