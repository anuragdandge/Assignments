#include <iostream>
#include <math.h>
using namespace std;
class account
{
public:
    char cust_name[50], type[10];
    long acc_no, balance;
    void get()
    {
        cout << "\nEnter customer name: ";
        cin >> cust_name;
        cout << "Enter account number: ";
        cin >> acc_no;
        cout << "Enter type of the account: ";
        cin >> type;
        cout << "Enter balance:";
        cin >> balance;
    }
    void display()
    {
        cout << "\n\n Customer Name: " << cust_name;
        cout << "\n Account Number: " << acc_no;
        cout << "\n Type: " << type;
        cout << "\n Balance: " << balance;
    }
    void deposit()
    {
        int amt;
        cout << "\n\nEnter the amount that you want to deposit: ";
        cin >> amt;
        balance += amt;
    }
};
class sav_acct : public account
{
public:
    int intr;
    void comp_intrest()
    {
        int t1, r1;

        cout << "Time given in year: ";
        cin >> t1;
        cout << "Rate of Intrest: ";
        cin >> r1;
        intr = balance * pow(1 + r1 / 12, t1);
        cout << intr;

        balance += intr;
        cout << "\nBalance with compound intrest: " << balance;
    }
    void withdraw()
    {
        int amt;
        cout << "\nEnter the amount that you want to withdraw: ";
        cin >> amt;
        if (balance > amt)
        {
            balance -= amt;
        }
        else
        {
            cout << "\nAmount can't be withdrawn due to insufficient balance";
        }
    }
};
class curr_acct : public account
{
public:
    void min_bal()
    {
        if (balance < 500)
        {
            cout << "\nPenality imposed: \nnew balance is:" << balance - 50;
        }
        else
        {
            cout << "\nNo penalty imposed";
        }
    }
    void withdraw()
    {
        int amt;
        cout << "\nEnter amount to be withdrawn:";
        cin >> amt;
        if (amt > balance)
        {
            cout << "Amount can't be withdrawn due to insufficient balance";
        }
        else
        {
            balance -= amt;
        }
    }
};

int main()
{
    account a;
    sav_acct s1;
    curr_acct c1;

    int choice, pos, i, chkacc, choice1;

    do
    {
        printf("\n1 : Savings\n2 : Current\nEnter Account Type : ");
        scanf("%d", &chkacc);
        if (chkacc == 1)
            do
            {
                printf("\n\n1.Information of Acc holder\n2.Accept deposit & update balance.\n3.Display bal.\n4.com & depo Int\n5.Wid & bal\n6.Exit");
                printf("\nEnter your choice: ");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    s1.get();
                    s1.account::display();
                    break;
                case 2:
                    s1.deposit();
                    s1.account::display();
                    for
                        saving and current acc break;
                case 3:
                    s1.account::display();
                    break;
                case 4:
                    s1.comp_intrest();
                    s1.display();
                    break;
                case 5:
                    s1.withdraw();
                    s1.display();
                    break;
                default:
                    break;
                }
            } while (choice != 6);
        else
            do
            {
                printf("\n\n1.Information of Acc holder\n2.Accept deposit & update balance.\n3.Display bal.\n4.Wid & bal\n5.Exit");
                printf("\nEnter your choice: ");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    c1.get();
                    c1.account::display();
                    break;
                case 2:
                    c1.deposit();
                    c1.account::display();
                    for
                        saving and current acc break;
                case 3:
                    c1.account::display();
                    break;
                case 4:
                    c1.withdraw();
                    c1.display();

                default:
                    break;
                }
            } while (choice != 5);
    } while (choice1 != 2);
    return 0;
}