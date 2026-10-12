#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class Atm{
    private:
        int balance = 5000;
    public:
        void checkBalance(){
            cout<<"Your balance is : "<<balance<<endl;
        }
};

int main(){
    Atm a;
    a.checkBalance();
}