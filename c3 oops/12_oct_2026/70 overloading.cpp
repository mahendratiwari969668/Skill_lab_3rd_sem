#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class Calulator{
    public:
    void add(int a){
        cout<<"Value of a is "<<a<<endl;
    }
    void add(int a, int b){
        cout<<"Value of a and b is "<<a+b<<endl;
    }
    void add(int a, int b, int c){
        cout<<"Value of a,b and c is "<<a+b+c<<endl;
    }
};

int main(){
        Calulator c;
        c.add(5);
        c.add(5,6);
        c.add(5,6,7);
}