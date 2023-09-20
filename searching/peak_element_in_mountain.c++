#include<iostream>
using namespace std;

int peak_element(int arr[],int n){

    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start<end){

        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}

int main(){


    int n;
    cout << "Enter size of array:";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in mountain  order:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int peak_index = peak_element(arr,n);

    cout<<"Peak element is at index:"<<peak_index<<"and it is:"<<arr[peak_index]<<endl;

}