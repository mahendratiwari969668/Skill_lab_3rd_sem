#include <iostream>
using namespace std;

int main() {

    char name[50];
    int rollNo;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter roll no: ";
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

    // Take marks of 5 subjects
    for (int i = 0; i < 5; i++) {

        cout << "Enter marks for " << subjects[i] << ": ";
        cin >> marks[i];

        if (marks[i] < 33) {
            shortage = true;
        }

        total += marks[i];
    }

    // Calculate percentage
    float percentage = total / 5.0;

    // Decide grade case
    int gradeCase;

    if (percentage >= 90)
        gradeCase = 1;
    else if (percentage >= 75)
        gradeCase = 2;
    else if (percentage >= 60)
        gradeCase = 3;
    else
        gradeCase = 4;

    cout << "\n========== REPORT CARD ==========\n";

    cout << "Name        : " << name << endl;
    cout << "Roll No.    : " << rollNo << endl;

    cout << "\nSubject Marks:\n";

    for (int i = 0; i < 5; i++) {
        cout << subjects[i] << " : " << marks[i] << endl;
    }

    cout << "\nTotal       : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    cout << "Grade       : ";

    switch (gradeCase) {

        case 1:
            cout << "A";
            break;

        case 2:
            cout << "B";
            break;

        case 3:
            cout << "C";
            break;

        case 4:
            cout << "D";
            break;
    }

    cout << endl;

    if (shortage)
        cout << "Result      : FAIL" << endl;
    else
        cout << "Result      : PASS" << endl;

    cout << "=================================\n";

    return 0;
}