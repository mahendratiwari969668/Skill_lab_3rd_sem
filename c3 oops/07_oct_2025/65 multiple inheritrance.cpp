#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class A{
    public:
    void show(){
        cout<<"Show A"<<endl;
    }
};
class B{
      public:
    void show(){
        cout<<"Show B"<<endl;
    }
};
class C : public A, public B{
      public:
    void show(){
        // cout<<"Show C"<<endl;
        A::show();
        B::show();
    }
};

int main(){
    C c;
    c.show();
}