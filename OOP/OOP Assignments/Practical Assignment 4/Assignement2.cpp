//   Write a C++ program to demonstrate a pure virtual function which is  invoked from the object of derived class through the pointer of the base  class. Base class contains getdata() and display(). Display the information of  employee using this.

#include <iostream>
using namespace std;
class Base
{
protected:
    int emp_no, salary;
    char emp_name[30];

public:
    virtual void getData() = 0;
    virtual void display() = 0;
};
class Derive : public Base
{
public:
    void getData()
    {
        cout << " Enter Employee Number "; 
        cin >> emp_no;
        cout << " Enter Employee Name "; 
        cin >> emp_name;
        cout << " Enter Employee Salary "; 
        cin >> salary;
        
        
    }
    void display(){
        cout << "\n Employee Number = " << emp_no;
        cout << "\n Employee Name = " << emp_name;
        cout << "\n Employee Salary = " << salary;
    }
};
int main()
{
    Base *bptr;
    Derive d;
    bptr = &d;
    bptr->getData();
    bptr->display();
}
