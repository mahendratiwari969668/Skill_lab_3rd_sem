
#include <iostream>
#include <string>
using namespace std;


class Room {
protected:
    int room;
    string guestName;
    int nights;

public:
  
    Room(int roomNo, string name, int n) {
        room = roomNo;
        guestName = name;
        nights = n;
    }

    
    void showDetails() {
        cout << "Room no : " << room << endl;
        cout << "Guest Name  : " << guestName << endl;
        cout << "Nights   : " << nights << endl;
    }

   
    virtual int calculateBill() {
        return 0;
    }
};


class StandardRoom : public Room {
public:
    StandardRoom(int roomNo, string name, int n)
        : Room(roomNo, name, n) {

        }

    int calculateBill() override {
        return nights * 1000;
    }
};
class DeluxeRoom : public Room {
public:
    DeluxeRoom(int roomNo, string name, int n)
        : Room(roomNo, name, n) {

        }

    int calculateBill() override {
        return nights * 2000;
    }
};
class SuiteRoom : public Room {
public:
    SuiteRoom(int roomNo, string name, int n)
        : Room(roomNo, name, n) {

        }

    int calculateBill() override {
        return nights * 3000;
    }
};



int main() {
   
    StandardRoom s(35, "Mahendra Tiwari", 1);
    DeluxeRoom d(100, "Sahil prajapati", 2);
    SuiteRoom u(23, "Utkarsh Dubey", 3);

    int totalBill = 0;

    cout<<"===== Hotel Bill Management ====="<<endl;

    
    cout << "Room Type   : Standard Room" << endl;
    s.showDetails();
    cout<< "Room Bill    : Rs. " << s.calculateBill()<<endl;
    totalBill += s.calculateBill();

    cout<<"--------------------------------"<<endl;

   
    cout<< "Room Type   : Standard Room"<<endl;
    d.showDetails();
    cout<<"Room Fee    : Rs. "<<d.calculateBill()<<endl;
    totalBill += d.calculateBill();

    cout<<"--------------------------------"<<endl;

    
    cout<<"Room Type   : Standard Room"<<endl;
    u.showDetails();
    cout<<"Room Fee    : Rs. "<<u.calculateBill()<<endl;
    totalBill += u.calculateBill();
   
    cout<<"Total Collection Today : Rs. " <<totalBill <<endl;

    return 0;
}



