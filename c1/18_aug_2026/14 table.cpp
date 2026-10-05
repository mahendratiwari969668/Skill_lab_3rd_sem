#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
       
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    int i=a;
    while(i<=10*a){
        cout<<i<<" ";
        i = i+a;
    }
}