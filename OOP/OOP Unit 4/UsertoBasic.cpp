// Example of Converting class to Basic Data type
#include <iostream>
using namespace std;
class Duration
{
    int hrs, min;
public:
    Duration(int h, int m)
    {
        hrs = h;
        min = m;
    }
    void disp()
    {
        cout << "Min = " << min << endl;
        cout << "Hrs = " << hrs << endl;
    }
    operator int(){return hrs * 60 + min;}
};
int main(){
    Duration t(3, 20);
    int time;
    t.disp();
    time = t;
    cout << time << " mins ";
}