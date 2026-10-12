#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class Shape{
    public:
    virtual void calculateArea() = 0;
};

class Rectangle : public Shape{
    public:
    void calculateArea(){
        int length = 5;
        int breadth = 10;

        cout<<"Area of rectangle : "<<length*breadth<<endl;

    }
};

int main(){
    Rectangle r;
    r.calculateArea();
}