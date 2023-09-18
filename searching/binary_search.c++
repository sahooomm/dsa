#include<iostream>
using namespace std;


bool binary_search(int arr[],int n,int key){

    int start = 0;
    int end = n-1;

    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid] == key){
            return true;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return false;

}
int main(){

    int n;
    cout << "Enter size of array:";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the key:";
    int key;
    cin >> key;

    int ans = binary_search(arr,n,key);
    
    if(ans){
        cout << "Element is found" << endl;
    }
    else{
        cout << "Element is not found" << endl;
    }


}