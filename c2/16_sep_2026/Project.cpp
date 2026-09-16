#include <iostream>
using namespace std;

int totalMarks(int marks[]){
    return marks[0] + marks[1] + marks[2];
}

float percentage(int total){
    return total / 3.0;
}

int main()
{
    string name[3];
    int rollNo[3];
    int marks[3][3];
    int total[3];

    int count = 0;
    int choice;

    do{
        cout << "1. Add Student"<<endl;
        cout << "2. Display Students"<<endl;
        cout << "3. Highest Marks"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter choice: "<<endl;
        cin >> choice;

        switch(choice){
        
            case 1:
                cout << "Enter name: ";
                cin >> name[count];

                cout << "Enter roll no: ";
                cin >> rollNo[count];

                cout << "Enter 3 subject marks:\n";
                for(int j = 0; j < 3; j++){
                    cin >> marks[count][j];
                }
                total[count] = totalMarks(marks[count]);
                count++;
                break;

            case 2:
                for(int i = 0; i < count; i++)
                {
                    cout << endl<<"Name: " <<endl<< name[i];
                    cout << "Roll No: " <<endl<< rollNo[i];
                    cout << "Marks: "<<endl;
                    for(int j = 0; j < 3; j++){
                        cout << marks[i][j] << " ";
                    }
                    cout << endl<<"Total: " << total[i];
                    cout <<endl<<"Percentage: "
                         << percentage(total[i]) << "%";
                if(percentage(total[i]) >= 40)
                    cout <<endl<<"Result: Pass";
                else
                     cout <<endl<<"Result: Fail";
                    cout <<endl;
                }

                break;
            case 3:{
                int highest = 0;
                for(int i = 1; i < count; i++){
                    if(total[i] > total[highest]){
                        highest = i;
                    }
                }
                cout << endl<<"Highest Marks Student:";
                cout << endl<<"Name: " << name[highest];
                cout << endl<<"Roll No: " << rollNo[highest];
                cout << endl<<"Total: " << total[highest];
                break;
            }

        case 4:
            cout<<"Exit";
             break;

         default:
            cout<<"Invalid choice";
    }
    } while(choice!=4);

    return 0;
}