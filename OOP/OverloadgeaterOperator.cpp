#include <iostream>
#include <string.h>
using namespace std;
class Demo
{
private:
    char str[100];

public:
    Demo()
    {
        strcpy(str, "");
    }
    Demo(char s1[])
    {
        strcpy(str, s1);
    }
    void operator>(Demo s)
    {
        if (strcmp(str, s.str) > 0)
        {
            cout << "\n False";
        }
        else
        {
            cout << "\n True";
        }
    }
    void operator<(Demo s)
    {
        if (strcmp(str, s.str) < 0)
        {
            cout << "\n False";
        }
        else
        {
            cout << "\n True";
        }
    }
};

int main()
{

    Demo s1("Hie");
    Demo s2("Hello");
    Demo s3("Happy");
    Demo s4("Birthday");
    s1 > s2;
    s1 < s2;
    s2 > s3;
    s3 < s4;
}