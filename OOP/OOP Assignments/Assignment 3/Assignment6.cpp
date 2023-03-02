// Assume that the company markets books and audio tapes
// prepare class Publication{}; having members " title & price "
// from Publications{}; class derive two classes a Class Book{}; which adds page count ,
// A Class Tape{}; that adds playing time in minutes
// further add base Class that holds sales from both books & Tape
// WAP in C++ that displays All Books having page count greater than 100 and All cassatt that play for more than 60 minutes

#include <iostream>
using namespace std;
class Publications
{
private:
    char title[50];
    int price;

public:
    void TitlePrice()
    {
        cout << "\n Enter Title : ";
        cin >> title;
        cout << " Enter Price : ";
        cin >> price;
    }
    void showTitlePrice()
    {
        cout << "\n Title : " << title;
        cout << "\n Price  : " << price << "/- Rs";
    }
};

class Book : public Publications
{
public:
    int pageCount;

public:
    void getPageCount()
    {
        cout << " Enter Page Count : ";
        cin >> pageCount;
    }
    void showPageCount()
    {
        if (pageCount > 100)
        {
            cout << "\n Page count  : " << pageCount << " pages";
        }
    }
};
class Tape : public Publications
{
public:
    int time;

public:
    void getTimeCount()
    {
        cout << " Enter Playing Time : ";
        cin >> time;
    }
    void showTimeCount()
    {
        if (time > 60)
        {
            cout << "\n Play Time : " << time << " minutes \n";
        }
    }
};
class Sales : public Book, public Tape
{
public:
    void display()
    {
        showPageCount();
        showTimeCount();
        // showTitlePrice();
    }
};
int main()
{
    Publications p;
    p.TitlePrice();
    Sales s;
    s.getPageCount();
    s.getTimeCount();

    Publications p1;
    p1.TitlePrice();
    Sales s1;
    s1.getPageCount();
    s1.getTimeCount();
    p.showTitlePrice();
    s.display();
    p1.showTitlePrice();
    s1.display();
    return 0;
}