/*Provide method definitions for the class described in Chapter Review Question 5
and write a short program that illustrates all the features.
Define a class to represent a bank account. Data members should include the
depositor’s name, the account number (use a string), and the balance. Member functions
should allow the following:
* Creating an object and initializing it.
* Displaying the depositor’s name, account number, and balance
* Depositing an amount of money given by an argument
* Withdrawing an amount of money given by an argument*/

#include <iostream>
#include <string>

using namespace std;

class BankDetails
{
private:
    string name_;
    string account_number_;
    int balance_;

public:
    void enter_info(string name, string acc_number, int balance);
    void show_info();
    void deposit(int add);
    void withdraw(int sub);
    BankDetails();
    ~BankDetails();
};

BankDetails::BankDetails()
{
    cout << "Deatils of account holder\n" << endl;
}

BankDetails::~BankDetails()
{
    string exit = "Thank you for providing bank details";
}

int main()
{
    BankDetails user;
    user.enter_info("Bhavesh Mankar", "102873973290", 12000);
    user.show_info();
    char opt;
    int deposit;
    int withdraw;
    cout << "Enter one of the following\n"
         << "a) Deposit       b) Withdraw       \nc) Show Info       q)Quit" << endl;
    cout << "Option: ";
    cin >> opt;
    while (opt != 'q')
    {
        switch (opt)

        {
        case 'a':
        {
            cout << "Enter amount to be deposited: ";
            cin >> deposit;
            user.deposit(deposit);
        }
        break;
        case 'b':
        {
            cout << "Enter amount to be withdrawned: ";
            cin >> withdraw;
            user.withdraw(withdraw);
        }
        break;
        case 'c':
        {
            user.show_info();
        }
        break;
        default:
        {
            cout << "Please Enter \'a\' , \'b\' or \'q\'" << endl;
        }
        break;
        }
        cout << "Enter one of the following\n"
             << "a) Deposit       b) Withdraw       \nc) Show Info       q)Quit" << endl;
        cout << "Option: ";
        cin >> opt;
    }
    cout << "Thankyou for visiting....." << endl;
    return 0;
}

void BankDetails::enter_info(string name, string acc_number, int bal)
{
    name_ = name;
    account_number_ = acc_number;
    balance_ = bal;
}

void BankDetails::show_info()
{
    cout << "Account Holder's Name: " << name_ << endl;
    cout << "A/C number: " << account_number_ << endl;
    cout << "Balance: " << balance_ << endl;
}

void BankDetails::deposit(int add)
{
    if (add < 0)
    {
        cout << "Please Enter a positive value" << endl;
    }
    else
    {
        cout << "Depositing....." << endl;
        balance_ += add;
        cout << "Current balance: " << balance_ << endl;
    }
}
void BankDetails::withdraw(int sub)
{
    if (sub > balance_)
    {
        cout << "Amount to be withdrawned is greater than balance" << endl;
        cout << "Current balance: " << balance_ << endl;
    }
    else
    {
        cout << "Withdrawing....." << endl;
        balance_ -= sub;
        cout << "Current balance: " << balance_ << endl;
    }
}