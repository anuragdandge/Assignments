#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cerr << "Usage: " << argv[0] << " inputfile" << endl;
        return 1;
    }

    ifstream inputfile(argv[1]);

    if (!inputfile)
    {
        cerr << "Error: Unable to open file " << argv[1] << endl;
        return 1;
    }

    string line;

    while (getline(inputfile, line))
    {
        cout << line << endl;
    }

    return 0;
}
