#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int marks = 80;
    if(marks>=90){
        cout<<"A Grade";
    }
    else if(marks>=75){
        cout<<"B Grade";
    }
    else if(marks>=60){
        cout<<"C Grade";
    }
    else if(marks>=40){
        cout<<"D Grade";
    }
    else {
        cout<<"Fail";
    }
}