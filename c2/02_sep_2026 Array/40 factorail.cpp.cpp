#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;


void fact(){
    int n=5;
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    cout<<fact;
}


int main(){
    fact();   
}