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

    int maximumNumber = arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(maximumNumber<arr[i][j]){
                maximumNumber=arr[i][j];
            }
        }
    }

    cout<<"Greatest element = "<<maximumNumber;
}