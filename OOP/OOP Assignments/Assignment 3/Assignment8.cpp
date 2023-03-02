#include<iostream>
using namespace std;
class Float{
   private: float num;
   public : 
   Float(){
    num = 12.5;
   }
   Float(float i){
    num = i ;
   }
   void operator +(Float);
   void operator -(Float);
   void operator *(Float);
   void operator /(Float);
};
void Float::operator+(Float d){
    int m=num+d.num;
    cout << "\n Addition of two objects = " << m ;
}
void Float::operator-(Float d){
    int m=num-d.num;
    cout << "\n Subtraction of two objects = " << m ;
}
void Float::operator*(Float d){
    int m=num*d.num;
    cout << "\n Multiplication of two objects = " << m ;
}
void Float::operator/(Float d){
    int m=num/d.num;
    cout << "\n Division of two objects = " << m ;
}
int main(){
    Float d1;
    Float d2(7.5);
    d1+d2;
    d1-d2;
    d1*d2;
    d1/d2;
}