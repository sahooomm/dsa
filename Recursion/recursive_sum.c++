#include<iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    int ans = n+sum(n-1);

    return ans;
}

int main(){

    int n;
    cout << "Enter the number?";
    cin >> n;

    int summation = sum(n);

    cout << "Hence, the sum of 1 to n numbers is:" << summation << endl;
}
