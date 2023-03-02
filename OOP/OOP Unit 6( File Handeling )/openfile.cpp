// Example of Read and Write of data from two Files through getline() method
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("Country");
    fout << "India" << endl;
    fout << "UnitedState" << endl;
    fout << "UK" << endl;
    fout.close();

    fout.open("Capital");
    fout << "Delhi " << endl;
    fout << "DC " << endl;
    fout << "London " << endl;
    fout.close();

    const int N = 10;
    char line[N];
    ifstream fin;

    fin.open("Country");
    cout << " Contents of Country File";
    while (fin)
    {
        fin.getline(line, N);
        cout << line << "\t";
    }
    fin.close();

    fin.open("Capital");
    cout << "\n Contents of Capital File ";

    while (fin)
    {
        fin.getline(line, N);
        cout << line << "\t";
    }
    fin.close();
}
