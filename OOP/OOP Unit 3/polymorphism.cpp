#include <iostream>
using namespace std;
class A 
{

public:
   void eat(){
    cout << "A Eat";
   }
};
class B : public A {
    public :
    void eat(){
        cout << " B eat";
    }
};
int main()
{
    B b;
    b.eat();
}