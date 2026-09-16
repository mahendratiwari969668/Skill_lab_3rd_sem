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
    

    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i*i;
    }
    cout<<"Sum of squares number is : "<<sum;
}


