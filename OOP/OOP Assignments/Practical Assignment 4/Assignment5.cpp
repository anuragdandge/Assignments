//   Create a class ‘Account’ that stores customer name, account number and  type of account. From this derive the classes cur_acct and sav_acct to make  them more specific to their requirements. Include necessary member  functions in order to achieve the following tasks:
//  a) Accept deposit from a customer and update the balance.
//  b) Display the balance.
//  c) Compute and deposit interest.
//  d) Permit withdrawal and update the balance.
// #include <iostream>
// using namespace std;
// class Account
// {
// protected:
//     char cust_name[50], acc_type[20];
//     int acc_number, balance;

// public:
//     Account(char name[], char type[], int number)
//     {
//         cust_name = name;
//         acc_type = type;
//         acc_number = number;
//         balance = 0;
//     }
//     void deposit(int amount)
//     {
//         balance += amount;
//     };
//     virtual void display_bal(){};
//     // virtual void deposit_interest() = 0;
//     // virtual void withdraw() = 0;
// };
// class curr_acc : public Account
// {
// protected:
//     int dep_amt;

// public:
//     void deposit(int amount)
//     {
//         cout << amount << " Deposited Successfully.";
//         balance += amount;
//     }
//     void display_bal()
//     {
//         cout << " Current Balance :- " << balance + dep_amt;
//         cout << " Balance :- " << balance;
//     }
// };
// class sav_acc : public Account
// {
// };

// int main()
// {
//     // Account *a;
//     Account ac;
//     ac.getInitialValues();
//     curr_acc c1;
//     c1.deposit(1000);
//     c1.display_bal();
//     // a = &c1;
//     // a->deposit();
//     // a->display_bal();
// }

#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    string customer_name;
    string account_number;
    string account_type;
    double balance;

public:
    Account(string name, string number, string type)
    {
        customer_name = name;
        account_number = number;
        account_type = type;
        balance = 0.0;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void display_balance()
    {
        cout << "Balance for account " << account_number << ": " << balance << endl;
    }

    virtual void compute_interest() {}

    virtual void withdraw(double amount) {}

    
};

class Cur_acct : public Account
{
public:
    Cur_acct(string name, string number) : Account(name, number, "Current") {}

    void withdraw(double amount)
    {
        if (balance - amount < 0.0)
        {
            cout << " insufficient funds." << endl;
        }
        else
        {
            balance -= amount;
        }
    }
};

class Sav_acct : public Account
{
public:
    Sav_acct(string name, string number) : Account(name, number, "Savings") {}

    void compute_interest()
    {
        double rate = 0.05;
        double interest = balance * rate;
        deposit(interest);
        cout << "Interest of " << interest << " added to account " << account_number << endl;
    }

    void withdraw(double amount)
    {
        
            balance -= amount;
    
    }

    
};

int main()
{
    Cur_acct c("Anurag", "031001");
    Sav_acct s("Omkar", "270501");


    c.deposit(5000.0);
    c.display_balance();

    s.deposit(10000.0);
    s.display_balance();

    s.compute_interest();
    s.display_balance();

    c.withdraw(2000.0);
    c.display_balance();

    s.withdraw(5000.0);
    s.display_balance();

}
