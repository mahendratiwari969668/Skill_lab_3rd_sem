#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main(){
        int m,n;
    cout<<"Enter the row and column of matrix :: ";
    cin>>m>>n;

    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    

    cout<<"Original matrix "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    cout<<"Outer matrix : "<<endl;

      
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(i==0 || i==m-1 || j==0 || j==n-1){
             cout<<arr[i][j]<<" ";
           }
        }
    }
    cout<<endl;

    int searchNumber;
    bool found = false;
    cout<<"Enter the number you want to search : ";
    cin>>searchNumber;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == searchNumber){
                found = true;
                break;
            }
        }
        if(found){
            break;
        }
    }

    if(found){
        cout<<searchNumber<<" is present in the matrix."<<endl;
    }else{
        cout<<searchNumber<<" is not present in the matrix."<<endl;
    }

} 
