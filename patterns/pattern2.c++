//Rectangle pattern
#include<iostream>
using namespace std;

int main(){

    int rows,col;
    cout<<"Enter the number of rows and columns:\n";
    cin>>rows;
    cin>>col;

    //outer loop
    
    for(int i=0;i<rows;i++){
        //inner loop
        for(int j=0;j<col;j++){

            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

