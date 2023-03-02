#include<iostream>
using namespace std;
template <class T>
class A {
    class T::C cobj;
    public:
    void getdata(){
        cobj.data();
    }
};

class B {
    public:
    class C {
        public : 
        void data(){
            cout << " Data is here ";
        }
    };
};

int main(){
    A <B> a;
    a.getdata();
}