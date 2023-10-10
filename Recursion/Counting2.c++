#include<iostream>
using namespace std;

//Printing the numbers from 1 to n.
int Count(int n){

    if(n==0){

        return 1;
    }
    
    Count(n-1);
    cout << n;
    
}

int main(){

    int n;
    cout << "Enter the number?";
    cin >> n;

    Count(n);

    return 0;
}