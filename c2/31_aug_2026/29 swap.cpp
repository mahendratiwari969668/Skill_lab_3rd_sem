#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a  and  b: ";
    cin>>a>>b;

    a = a + b;  // a = 10 + 20 = 30
    b = a - b;  // b = 30 - 20 = 10
    a = a - b;  // a = 30 - 10 = 20

    cout<<a<<" "<<b;
}