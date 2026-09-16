#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter row and column : ";
    cin>>a>>b;

    int arr[a][b];
    
    cout<<"Enter array "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }


    cout<<"\n The array is "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}