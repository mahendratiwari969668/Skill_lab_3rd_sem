#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class Animal{
    protected:
    // public:
    void eat(){
        cout<<"i can eat"<<endl;
    }
};

class Cat : public Animal{
    public:
    void meow(){
        cout<<"meow meow"<<endl;
    }
};

int main(){
    Animal a;
    // a.eat();
    Cat c;
    // c.eat();
    c.meow();
}