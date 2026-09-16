#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    cout<<"Before swapping\n ";
    cout<<"a = "<<a<<" "<<" b = "<<b<<endl;

    int temp = a;
          a  = b;
          b  = temp;

    cout<<"After swapping\n ";
    cout<<"a = "<<a<<" "<<" b = "<<b;
}