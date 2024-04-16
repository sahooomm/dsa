//printing square pattern of stars.
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of rows";
    cin>>n;

    //outer loop
    for(int i=0;i<n;i++){
        //inner loop
        for(int i=0;i<n;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}