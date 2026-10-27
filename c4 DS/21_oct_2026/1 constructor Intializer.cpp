#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;


class A{
    protected:
    int a;
    public:
    A (int x){
        a = x;
    }
    void display(){
        cout<<a<<endl;
    }
};
class B{
    protected:
    int b;
    public:
    B (int y){
        b= y;
    }
    void display(){
        cout<<b<<endl;
    }
};
class C : public  A, public B{
    protected:
    int c;
    public:

    C(int x, int y, int z) : A(x), B(y){
        c = z;
    }

    void display(){
        A::display();
        B::display();
        cout<<c<<endl;
    }
    
};

int main(){
    C obj(10, 20, 30);
    obj.display();
    
    
}