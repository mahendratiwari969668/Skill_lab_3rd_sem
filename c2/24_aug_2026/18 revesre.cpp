#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int rev = 0;

    while(n!=0){
        rev *= 10;
        rev += (n%10);
        n /= 10;
    }

    cout<<"Reverse number is : "<<rev;
}