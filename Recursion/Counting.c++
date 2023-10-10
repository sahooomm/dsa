#include<iostream>
using namespace std;

//Printing the numbers from n to 1.
int Count(int n){

    if(n==0){

        return 1;
    }
    cout << n;
    Count(n-1);
}

int main(){

    int n;
    cout << "Enter the number?";
    cin >> n;

    Count(n);

    return 0;
}