//Hollow Inverted Half Pyramid
#include<iostream>
using namespace std;
int main(){

    int rows;
    cout<<"Enter the number of rows:\n";
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            if(i==0){
                cout<<"*";
            }
            else{
                if(j==0 || j==rows-i-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}