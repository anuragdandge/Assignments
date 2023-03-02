// Example of Reading & Writing of Data From A File

#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    ofstream write("ITEM"); // write is object of class ofstream
    
    cout << " Enter Item Name ";
    char name[30];
    cin >> name;
    write << name << endl;

    cout << " Enter Item Cost ";
    float cost;
    cin >> cost;
    write << cost << endl;

    write.close();

    ifstream read("ITEM");

    read >> name;
    read >> cost;

    cout << " Item Name = " << name << endl;
    cout << " Item Cost = " << cost;
}

