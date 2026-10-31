#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
using namespace std;






   

int main(){

     int arr[8] = {10,20,30,60,90,100,110,120};

    int target = 90;


    int n = sizeof(arr) / sizeof(arr[0]); 


     int lo = 0; 
    int hi = n - 1; 
    
    while(lo <= hi){ 
        int mid = lo + (hi - lo); 
        
        if(arr[mid] > target) 
            hi = mid - 1; 
        else if(arr[mid] < target) 
            lo = mid + 1; 
        else {
            cout<<"Target found at index = "<<mid; 
            break;
        }
    } 
    
    
}
