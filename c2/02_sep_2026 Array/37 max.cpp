#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int arr[5] = {10, 50, 20, 60, 40};
    int max = INT_MIN;

    for(int i=0;i<5;i++){
     if(max < arr[i])  max = arr[i]; 
    }
    cout<<max;
    
}