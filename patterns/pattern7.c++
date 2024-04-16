//Inverted Numeric hollow pyramid
#include<iostream>
using namespace std;
int main(){

    int rows;
    cout<<"Enter the rows:\n";
    cin>>rows;

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}