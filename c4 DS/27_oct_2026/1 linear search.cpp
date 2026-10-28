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
    

    int arr[] = {10,20,30,60,90,100,110,120};

    int Key;
    cout<<"Enter key : ";
    cin>>Key;
    bool flag = false;

    for(int i=0;i<=7;i++){
        if(Key == arr[i]){
            flag = true;
        }
    }


    if(flag == true){
        cout<<"Target found ";
    }
    else cout<<"Target not found ";
}