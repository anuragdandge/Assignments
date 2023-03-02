#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
    const int size = 80;
    char line[size];
    ifstream fin1, fin2;
    fin1.open("Country");
    fin2.open("Capital");
    for (int i = 1; i <= 10; i++){
        if (fin1.eof() != 0)
        {
            exit(1);
        }
        fin1.getline(line, size);
        cout << line;
        if (fin1.eof() != 0)
        {
            exit(1);
        }
        fin2.getline(line, size);
        cout << line << "\n";
    }
}
