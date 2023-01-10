
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
