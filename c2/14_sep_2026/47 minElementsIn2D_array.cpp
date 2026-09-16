#include <iostream>
#include <climits>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the row and column of matrix ";
    cin>>m>>n;

   

    int arr[m][n];

    for(int i=0;i<m;i++){
        
        for(int j=0;j<n;j++){
           cin>>arr[i][j];
        }
       
    }

    int minimumNumber = arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(minimumNumber>arr[i][j]){
                minimumNumber=arr[i][j];
            }
        }
    }

    cout<<"Greatest element = "<<minimumNumber;
}