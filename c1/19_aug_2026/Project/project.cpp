#include <iostream>
using namespace std;

int main() {

    char name[50];
    int rollNo;

    cout << "Enter name of student: ";
    cin >> name;

    cout << "Enter roll no of student: ";
    cin >> rollNo;

    int marks[5];

    char subjects[5][20] = {
        "Maths",
        "English",
        "Computer",
        "Science",
        "DSA"
    };

    bool shortage = false;
    int total = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for " << subjects[i] << ": ";
        cin >> marks[i];
        if (marks[i] < 33) {
            shortage = true;
        }
        total += marks[i];
    }

    float percentage = total / 5.0;

    char grade;

    switch (int(percentage) / 10) {

        case 10:
        case 9:
            grade = 'A';
            break;

        case 8:
        case 7:
            grade = 'B';
            break;

        case 6:
            grade = 'C';
            break;

        default:
            grade = 'D';
    }
    cout << "           REPORT CARD\n";
  
    cout << "Name       : " << name << endl;
    cout << "Roll No    : " << rollNo << endl;
    cout << "\nSubject-wise Marks:\n";

    for (int i = 0; i < 5; i++) {
        cout << subjects[i] << " : " << marks[i] << endl;
    }
    cout << "Total Marks : " << total << " / 500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;
    if (shortage == true) {
        cout << "Result      : FAIL" << endl;
    }
    else {
        cout << "Result      : PASS" << endl;
    }

  

    return 0;
}
