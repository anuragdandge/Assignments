// 4. Define base class Student with Roll_No, Name , Marks1 , Marks2 , Marks3 as data members.
//  Define Sports class with SportName , ParticipationLevel , Achievement as data members and also find sports grade .
//   Inherit Student Class in Sports Class to find final grade of five students.
//  (District/Gold - 3 District/Silver – 2 District/Bronze – 1 State/Gold - 6 State /Silver – 5 State /Bronze – 4 National/Gold - 9 National/Silver – 8 National/Bronze – 7)

#include <iostream>
using namespace std;
class Student
{

private:
    int Roll_No, Mark1, Mark2, Mark3;
    char name[30];

public:
    void getStudInfo();
    void printStudInfo();
};

void Student::getStudInfo()
{
    cout << "\n  Enter Roll Number ";
    cin >> Roll_No;
    cout << "\n  Enter Name ";
    cin >> name;
    cout << "\n  Enter Marks of three subjects : ";
    cin >> Mark1 >> Mark2 >> Mark3;
};
void Student::printStudInfo()
{
    cout << "\n  Roll Number = " << Roll_No;
    cout << "\n  Name = " << name;
    cout << "\n  Mark 1 " << Mark1 << "\n  Mark 2 " << Mark2 << "\n  Mark 3 " << Mark3;
}

class Sports : public Student
{
private:
    char SportName[50], ParticipationLevel[50], Achievement[50];

public:
    void getSportInfo();
    void printSportInfo();
};
void Sports::getSportInfo()
{
    cout << "\n Enter Sport Name : ";
    cin >> SportName;
    cout << "\n Enter Participation Level  : ";
    cin >> ParticipationLevel;
    cout << "\n Enter Achievement : ";
    cin >> Achievement;
}
void Sports::printSportInfo()
{
    // cout << "\n  Roll Number = " << Roll_No;
    // cout << "\n  Name = " << name;
    // cout << "\n  Mark 1 " << Mark1 << "\n  Mark 2 " << Mark2 << "\n  Mark 3 " << Mark3;
    cout << "\n  Sport Name : " << SportName;
    cout << "\n  Participation Level  : " << ParticipationLevel;
    cout << "\n  Achievement : " << Achievement;
}

int main()
{
    Sports s1, s2, s3, s4, s5;
    s1.getStudInfo();
    s1.getSportInfo();
    s2.getStudInfo();
    s2.getSportInfo();
    s3.getStudInfo();
    s3.getSportInfo();
    s4.getStudInfo();
    s4.getSportInfo();
    s5.getStudInfo();
    s5.getSportInfo();
    s1.printStudInfo();
    s1.printSportInfo();
    s2.printStudInfo();
    s2.printSportInfo();
    s3.printStudInfo();
    s3.printSportInfo();
    s4.printStudInfo();
    s4.printSportInfo();
    s5.printStudInfo();
    s5.printSportInfo();
    // Sports s1sp;
    // s1sp.getSportInfo();
}