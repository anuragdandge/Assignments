// 4. Write a C++ program to maintain the records of person with details (Name and Age) and find the eldest among them. The program must use this pointer to return the result.
#include <iostream>
using namespace std;
class Base
{

protected:
    char name[30];
    int age;

public:
    void getData()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter age : ";
        cin >> age;
    }

    Base elder(Base &p)
    {
        if (p.age >= this->age)
        {
            return p;
        }
        else
        {
            return *this;
        }
    }
    void putData()
    {
        cout << " name : " << name;
        cout << ", age : " << age << endl;
    }
};
int main()
{
    Base p1, p2, p3;
    p1.getData();
    p2.getData();
    p3.getData();

    Base p= p1.elder(p2);
    cout << " Elder Person (p1 & p2) = ";
    p.putData();

    p = p1.elder(p3);
    cout << " Elder Person (p1 & p3)= ";
    p.putData();
}
