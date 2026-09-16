#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int a, b, LCM;
    cout << "Enter two number : ";
    cin >> a >> b;



    for (int i = 1; i <= (a * b); i++)
    {
        
        if(i % a == 0 && i % b == 0){
            LCM = i;
           break;
        }
         
        
    }

    cout<<LCM;

    return 0;
}