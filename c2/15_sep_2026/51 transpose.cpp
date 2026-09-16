#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main(){
   
    int m,n;
    cout<<"Enter the ro and column of matrix :: ";
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
    

    int trans[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            trans[j][i] = arr[i][j];
        }
    }

    cout<<"Transpose matrix:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }

  

}