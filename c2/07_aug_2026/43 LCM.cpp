#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

void lcm(int a, int b){
    
    int LCM;

    for (int i = 1; i <= (a * b); i++)
    {
        
        if(i % a == 0 && i % b == 0){
            LCM = i;
           break;
        }
         
       
        
    }

    cout<<"LCM = "<<LCM<<endl;
     if(LCM%2==0) cout<<"LCM is Even ";
     else cout<<"LCM is odd";
}

int main(){
    cout<<"Enter a and b : ";
    int a, b;
    cin>>a>>b;
    lcm(a,b);
}