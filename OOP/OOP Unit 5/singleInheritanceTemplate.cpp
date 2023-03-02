// Example of single inheritance using template

#include <iostream>
using namespace std;
template <class T >
class Base{
    private: 
    T val ; 
    public : 
    void set(T a ){
        val = a ; 
        cout << "\n Accessing Base Class " << val ;
    }
};
template <class T >
class Derived : public Base <T>{
    private : 
    T data;
    public:
    void set(T b){
        Base <T> :: set(b);
        data = b;
        cout << "\n Accessing derived " << b ; 
    }
};


int main(){
Derived <float> a;
a.set(4.5);
Base <int> b;
b.set(15);
 
}