#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class Vehicle{
    public:
    void vehicle(){
        cout<<"I am a vehicle"<<endl;
    }
};

class Fare{
    
    public:
    void fare(){
        cout<<"Fare of vehicle"<<endl;
    }
};



class Car : public Vehicle{
    public:
    void car(){
        cout<<"This is a car"<<endl;
    }
};
class Bus :public Vehicle, public Fare{
    public:
    void bus(){
        cout<<"This is a bus"<<endl;
    }
};
int main(){

     Car c;
    c.car();
   Bus b;
   b.vehicle();
   b.bus();
   b.fare();


}