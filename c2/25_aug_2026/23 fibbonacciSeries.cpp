#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;

    cout<<"Enter n : ";
    cin>>n;

    int firstNumber = 1;
    int secondNumber = 0;
    int fibo;

    for(int i=1;i<=n;i++){
        fibo = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = fibo;
        cout<<fibo<<" ";
    }
}