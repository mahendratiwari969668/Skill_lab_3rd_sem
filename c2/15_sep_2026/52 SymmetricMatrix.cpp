#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main(){
   
    int m,n;
    cout<<"Enter the row and column of matrix : ";
    cin>>m>>n;


    int arr[m][n];
    cout<<"Enter the elements of matrix :"<<endl;
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


   bool flag = true;

   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(trans[i][j] != arr[i][j]){
            flag = false;
            break;
        }
    }
   }

   if(flag==true) cout<<"This is a symmatric matrix";
   else cout<<"This is not a symmatric matrix";

}