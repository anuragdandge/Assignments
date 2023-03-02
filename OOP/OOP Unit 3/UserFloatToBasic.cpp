// Example of Converting class to Basic Data type
#include<iostream>
using namespace std;
class Duration{
    float hrs,min;
    public : Duration (float h,float m){
       hrs=h;
       min=m;
    }
    void disp(){
        cout << "Min = " << min << endl;
        cout << "Hrs = " << hrs <<endl;

    }
    operator float(){
        return hrs*60+min;
    }
};
int main(){
    Duration t(3.20,20.40);
    float time;
    t.disp();
    time=t;
    cout << "Float "<<time;
}