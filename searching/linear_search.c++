#include<iostream>
using namespace std;

bool linear_search(int arr[],int n,int key){

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return true;
        }

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

    int key;
    cout << "Enter the key:";
    cin >> key;

    int ans = linear_search(arr,n,key);

    if(ans){
        cout << "Element is found" << endl;
    }
    else{
        cout << "Element is not found" << endl;
    }

    
}