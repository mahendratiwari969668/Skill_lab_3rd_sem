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
    int original = n;
    int rev = 0;
    while(n!=0){
        rev *= 10;
        rev += (n%10);
        n /= 10;
    }

    if(original==rev) cout<<"This is palindrom";
    else cout<<"This not a palindrom";
}