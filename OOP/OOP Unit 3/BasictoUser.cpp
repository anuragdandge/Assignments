// Example of Converting class to Basic Data type
#include<iostream>
using namespace std;
class Duration{
    int hrs,min;
    public : 
    Duration (){
    //  cout << "object Created .";
    }Duration (int t){
       hrs=t/60;
       min=t%60;
       cout << hrs << " Hours & "<<min<<" Mins";
    }
};
int main(){
    int t=160;
    Duration d;
    d=t;

}