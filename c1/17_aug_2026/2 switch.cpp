#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int day = 1;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thusrday";
        break;

    case 5:
        cout << "Feiday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Enter valid date number ";
        break;
    }
}