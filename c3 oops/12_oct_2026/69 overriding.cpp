#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class Payment{
    public:
    virtual void pay() = 0;
};

class Upi : public Payment{
    public:
        void pay()override{
            cout<<"Pay through UPI "<<endl;
        }
};

class CreditCard : public Payment{
    public:
        void pay()override{
            cout<<"Pay through Credit Card"<<endl;
        }
};
int main(){
  Upi u;
  CreditCard c;
  
  u.pay();
  c.pay();
}