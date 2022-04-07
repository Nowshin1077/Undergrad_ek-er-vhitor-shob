#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <iostream>

using namespace std;

class Account
{
public:
    double balance, annualProfitRate;
    char accountNumber[25];
    char date[11];
    Account ()
    {
        balance = 1000;
    }
    virtual void withdraw(double w)
    {
        balance=balance-w;
        cout << "\t\tSuccessful withdrawn!!!" <<endl;
        cout << "\t\tCurrent Balance: " << balance << endl;
    }
    void deposit(double d)
    {
        balance=balance+d;
        cout << "\t\tAmount added successfully!!!" << endl;
        cout << "\t\tPresent Balance: " << balance << endl;
    }
    virtual toString()
    {
        cout << "\t\tAccount number: " << accountNumber << endl;
        cout << "\t\tBalance: " << balance << endl;
    }
};

class CheckingAccount : public Account
{
public:
     void withdraw(double w)
    {
        balance=balance-w;
    }
    CheckingAccount (char *AN, double w, double d, char *da){
        strcpy(accountNumber, AN);
        cout << "\t\tAccount Number: " << accountNumber << endl;
        strcpy(date, da);
        cout << "\t\tAccount created on " << date <<endl;
        cout << "\t\tCurrent balance: " << balance << " "<< "Tk" << endl;
        cout << "\t\tWant to deposit " << d << " "<< "Tk" << endl;
        deposit(d);
        //cout << "\t\tPresent Balance: " << balance << endl;
        cout << "\t\tWant to withdraw " << w << " "<< "Tk" << endl;
        withdraw(w);
        cout << "\t\tSuccessful withdrawn!!!" <<endl;
        cout << "\t\tCurrent Balance: " << balance << "Tk" << endl;


    }

};

class SavingsAccount : public Account
{
public:
    void withdraw(double w)
    {
        if(balance < w )
            cout << "\t\tYou can't cross your limit!!!" <<endl;
        else
        {
            balance = balance-w;
            cout << "\t\tSuccessful withdrawn!!!" <<endl;
            cout << "\t\tPresent Balance: " << balance << " "<< "Tk" << endl;

        }
    }
    SavingsAccount (char *AN, double w, double d, char *da){
        strcpy(accountNumber, AN);
        cout << "\t\tAccount Number: " << accountNumber << endl;
        strcpy(date, da);
        cout << "\t\tAccount created on " << date <<endl;
        cout << "\t\tCurrent balance: " << balance << " "<< "Tk" << endl;
        cout << "\t\tWant to deposit " << d << " "<< "Tk" << endl;
        deposit(d);

        cout << "\t\tWant to withdraw " << w << " "<< "Tk" << endl;
        withdraw(w);

    }
};


int main()
{

//	freopen("in.txt", "r", stdin);
//	freopen("out.txt", "w", stdout);
    Account OB;
    cout << "Savings Account :\n" << endl;

    SavingsAccount A("SA12345678910", 10002, 1000, "12/10/2019");
    cout << "\n\nChecking Account :\n" << endl;
    CheckingAccount B("SAabc1234567", 100, 100000, "25/08/2016");

    return 0;

}

