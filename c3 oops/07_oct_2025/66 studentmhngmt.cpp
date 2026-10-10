#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class Student{
protected:
        string name;
        int rollNo;

public:
    void getStudent(){
        cout<<"Enter the name : ";
        getline(cin,name);
        cout<<"Enter roll no : ";
        cin>>rollNo;
    }
};

class Result : public Student{
    private:
    int marks;
    char grade;

public:
    void getResult(){
        getStudent();
        cout<<" Enter the marks : ";
        cin>>marks;;

        if(marks >= 80){
            grade = 'A';
        }
        else if(marks >= 60){
            grade = 'B';
        }
        else if(marks >= 40){
            grade = 'C';
        }
        else {
            grade = 'F';
        }
    }

    void display(){
        cout<<endl<<"-------Student result------"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no : "<<rollNo<<endl;
        cout<<"Grade : "<<grade<<endl;

    }
};

int main(){
    Result s1;
    s1.getResult();
    s1.display();
}