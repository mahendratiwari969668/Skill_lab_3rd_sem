#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class Animal{
    // protected:
    public:
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
class Dog : public Animal{
    public:
    void bark(){
        cout<<"I can bark"<<endl;
    }
};
int main(){

    Cat c;
    c.meow();
   Dog g;
   g.bark();


}