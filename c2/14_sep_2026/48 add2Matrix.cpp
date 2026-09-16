#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main(){
       int m,n;
    cout<<"Enter the row and column of 1st matrix ";
    cin>>m>>n;

   

    int arr[m][n];

    for(int i=0;i<m;i++){
        
        for(int j=0;j<n;j++){
           cin>>arr[i][j];
        }
       
    }



       int o,p;
    cout<<"Enter the row and column of 2nd matrix ";
    cin>>o>>p;

   

    int brr[o][p];

    for(int i=0;i<o;i++){
        
        for(int j=0;j<p;j++){
           cin>>brr[i][j];
        }
       
    }


    if(n!=o){
        cout<<"Matrix is not valid for addition"<<endl;
    }

    else {
          int crr[m][p];

    for(int i=0;i<m;i++){
        
         for(int j=0;j<p;j++){
          crr[i][j] = arr[i][j] + brr[i][j];
         }
       
      }


      cout<<"Sum of arr and brr "<<endl;
       for(int i=0;i<m;i++){
        
         for(int j=0;j<p;j++){
          cout<<crr[i][j]<<" ";
         }
         cout<<endl;
       
      }
    }
}