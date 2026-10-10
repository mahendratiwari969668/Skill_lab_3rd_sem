#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class Student{
    private:
    string name;
    int age;

    public:
    Student(string n, int a){
        name = n;
        age = a;
    }
    Student(const Student&s){
        name = s.name;
        age = s.age;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

int main(){
    Student s("Mahendra", 35);
    s.display();
}