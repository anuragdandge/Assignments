//   Consider a book shop which sales books and video tapes. Define a class  Media which store title and price of a publication. Create two derive classes  book and tape where book class is used to store no of pages of book and  tape class is used to store playing time of a tape. Use display function in all  the classes and show the use of virtual function.


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