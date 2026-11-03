#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
using namespace std;

class BankAccount{



    int accountNo;
    string name;
    int pin;
    int balance;
    bool locked;
    int wrongAttempts;

    string lastFive[5];
    int transactionCount;


      void addTransaction(string transaction){

        if(transactionCount<5){

            lastFive[transactionCount] = transaction;
            transactionCount++;

        }
        else {

            for (int i=0;i<4;i++) {
                lastFive[i] = lastFive[i+1];
            }

            lastFive[4] = transaction;
        }
    }

      bool verifyPin(){

        if(locked){
            cout << "Account is locked!" << endl;
            return false;
        }

        int enteredPin;

        cout << "Enter PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin) {

            wrongAttempts = 0;
            return true;
        }

        wrongAttempts++;

        cout<<"Incorrect PIN!"<<endl;

        cout<<"Attempts remaining: "
             <<3 - wrongAttempts<<endl;

        if (wrongAttempts >= 3) {

            locked = true;

            cout << "Account locked due to 3 wrong attempts!" << endl;
        }

        return false;
    }


    
public:


    BankAccount(int acc, string n, int p, int b) {

        accountNo = acc;
        name = n;
        pin = p;
        balance = b;
        locked = false;
        wrongAttempts = 0;
        transactionCount = 0;

        addTransaction("Account opened");
    }

      void checkBalance() {

        if (verifyPin()) {

            cout<<"Available Balance: Rs. "
                 <<balance<<endl;
        }
    }

     void deposit(){

        if (!verifyPin())
            return;

        int amount;

        cout<<"Enter deposit amount: ";
        cin>>amount;

        if (amount <= 0) {

            cout << "Invalid amount!" << endl;
            return;
        }

        balance += amount;

        addTransaction("Deposited: Rs. " +
                       to_string(amount));

        cout << "Amount deposited successfully!" << endl;

        cout << "Current Balance: Rs. "
             << balance << endl;
    }

    
    void withdraw(){

        if(!verifyPin())
            return;

        int amount;

        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (amount<=0||amount>10000||amount%100!=0) {

            cout<<"Invalid amount!"<<endl;

            cout<<"Withdrawal must be in multiples "
                 <<"of 100 and maximum Rs. 10000."
                 <<endl;

            return;
        }

        if (balance-amount<500) {

            cout<<"Minimum balance of Rs. 500 "
                 <<"must be maintained!"<<endl;

            return;
        }

        balance-=amount;

        addTransaction("Withdrawn: Rs. " +(amount));

        cout << "Please collect your cash." << endl;

        cout << "Remaining Balance: Rs. "
             << balance << endl;
    }


};


int main(){

     BankAccount bank(1001, "Mahendra", 1234, 10000);

    int choice;

  
    do {

        cout << endl;
        cout << "========== ATM SYSTEM ==========" << endl;

        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Mini Statement" << endl;
        cout << "5. Change PIN" << endl;
        cout << "6. Logout" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:

                bank.checkBalance();
                break;

            case 2:

                bank.deposit();
                break;

            case 3:

                bank.withdraw();
                break;

           

            default:

                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 6);

    return 0;
    
}