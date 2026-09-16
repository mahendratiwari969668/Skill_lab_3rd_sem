#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter the number of row : ";
    cin>>r;
    cout<<"Enter the number of column : ";
    cin>>c;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<" *";
        }
        cout<<endl;
    }
}