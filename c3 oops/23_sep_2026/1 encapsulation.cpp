#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;


class Student{
private:
    string name;
    int roll_no;

public:
    void display(string n, int r){
        name = n;
        roll_no = r;

        cout<<name<<endl;
        cout<<roll_no<<endl;

    }


};

int main(){
    Student s;
   
    // s.name = "Mahendra";
    // s.roll_no = 35;
    // cout<<s.name<<endl;
    // cout<<s.roll_no<<endl;

    s.display("Mahendra", 35);


}