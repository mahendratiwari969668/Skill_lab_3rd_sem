#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

class Student{
    public:
        Student (){
            cout<<"Create object"<<endl;
        }
        ~Student(){
            cout<<"Object destroyed"<<endl;
        }
};



int main(){
    cout<<"Main start"<<endl;
    Student s;
    cout<<"Working with object"<<endl;
}