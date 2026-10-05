#include<iostream>
using namespace std;
class student{
    public:
    int age ;
    int marks;
    string name;
};
int main(){
    cout<<"Hello word"<<endl;
    student obj;
    obj.name="Rohan";
    obj.age=19;
    obj.marks=98;
    cout<<obj.name<<endl;
    cout<<obj.age<<endl;
    cout<<obj.marks<<endl;
    cout<<endl;

}