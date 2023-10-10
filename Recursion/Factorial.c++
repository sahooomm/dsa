#include<iostream>
using namespace std;


int factorial(int n){

    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }

    int smallOutput = factorial(n-1);
    int answer = n * smallOutput;

    return answer;
}

int main(){

    int n;
    cout << "Enter the number?";
    cin >> n;

    int output = factorial(n);

    cout << "The factorial of " << n << " is " << output << endl;

    return 0;


}