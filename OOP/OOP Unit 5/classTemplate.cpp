// Class Template can also be defined similarly to the function template.
// When a class uses the concept of template , then the class known as Generic Class

// Ttype is a placeholder name which will be determined when a class us instantiated , We can define more than one generic data type

// class_name<type> ob;
// where class_name : name of class
// type : type of the data which class is accepting

// WAP to find greater number among 2 nums using class template
#include <iostream>
using namespace std;
template <class T>
class demo{
    T a, b;
public:
    demo(T x, T y){a = x;b = y;}
    void check(){
        if (a > b){
            cout << " Greater num = " << a << endl;
        }else{
            cout << " Greater num = " << b << endl;
        }   
    }
};
int main(){
    demo <int> d(5,3);
    demo <float> d1(4.8,9.2);
    demo <char> d2('A','Z');
    d.check();
    d1.check();
    d2.check();
}