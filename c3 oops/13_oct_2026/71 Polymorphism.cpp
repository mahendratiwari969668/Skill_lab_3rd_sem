#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class Animal {
    public:
    virtual void sound(){
        cout<<"Animal make a sound"<<endl;
    }
};

class Dog : public Animal {
    public:
        void sound() override {
            cout<<"Dog barks"<<endl;
        }
};
class Cat : public Animal {
    public:
        void sound() override {
            cout<<"Cat meow"<<endl;
        }
};

int main(){
  Animal* ace;
  Animal a;
    Dog d;
    Cat c;

    ace = &d;
    ace->sound();

    ace = &c;
    ace->sound();
    // c.sound();
    // d.sound();

}