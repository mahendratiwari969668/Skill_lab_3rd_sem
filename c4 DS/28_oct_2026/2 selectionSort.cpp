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

     int arr[10] = {99,5,6,3,7,8,66,43,22,57};

    int n = sizeof(arr) / sizeof(arr[0]); 


    cout<<"Before Sorting : ";

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;



    for(int i=0;i<n-1;i++){
        int mn = arr[i], mnIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<mn){
                mn = arr[j];
                mnIdx = j;
            }
        }
          swap(arr[i],arr[mnIdx]);
    }


    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}