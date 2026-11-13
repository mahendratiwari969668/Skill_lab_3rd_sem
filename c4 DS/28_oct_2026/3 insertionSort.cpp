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
   int arr[] = {4,3,5,7,4,2,6,9,0,3};

   int n = sizeof(arr)/sizeof(arr[0]);

   cout<<"Before sorting : ";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   
   for(int i=1;i<n-1;i++){
       for(int j=i;j>=1 and arr[j]<arr[j-1];j--){
           swap(arr[j],arr[j-1]);
        }
    }

    cout<<endl;
    
    
       cout<<"After sorting : ";
       for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
       }
    
}