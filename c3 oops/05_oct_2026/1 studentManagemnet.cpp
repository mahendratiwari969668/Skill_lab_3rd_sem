#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int maths;
    int science;
    int computer;

public:
    Student(string n, int r, int m, int s, int c) {
        name = n;
        rollNo = r;
        maths = m;
        science = s;
        computer = c;
    }

    int calculateTotal() {
        return maths + science + computer;
    }

    float calculatePercentage() {
        return calculateTotal() / 3.0;
    }

    void checkResult() {
        if (maths >= 33 && science >= 33 && computer >= 33) {
            cout << "Pass" << endl;
        }
        else {
            cout << "Fail" << endl;
        }
    }

public:
    void display() {
        cout << "---------- Student Management ----------" << endl;
        cout << "Name - " << name << endl;
        cout << "Roll No - " << rollNo << endl;
        cout << "Total - " << calculateTotal() << endl;
        cout << "Percentage - " << calculatePercentage() << "%" << endl;

        checkResult();
    }
};

int main() {
    Student s("Mahendra", 35, 77, 88, 80);

    s.checkResult();
    s.display();

    return 0;
}