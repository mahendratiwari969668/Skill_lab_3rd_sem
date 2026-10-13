#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class Student{
    public:
        void add(int a){
            cout<<"Sum of a"<<a<<endl;
        }
        void add(int a, int b){
            cout<<"Sum of a and b"<<a+b<<endl;
        }
        void add(int a, int b , int c){
            cout<<"Sum of a b and c "<<a+b+c<<endl;
        }
};

int main(){
    Student s;
    s.add(3);
}