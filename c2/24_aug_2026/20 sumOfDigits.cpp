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

    int sum = 0;
    while(n!=0){
        int Lastdigit = n%10;
        sum += Lastdigit;
        n /= 10;
    }
    cout<<sum;

  
}