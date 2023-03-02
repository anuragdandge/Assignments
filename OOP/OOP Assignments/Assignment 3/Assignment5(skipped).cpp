// Write C++ program to read the base class Information i.e. employee name,
// code, designation. And the derived class contains years of experience and
// age. Design a virtual base class for the item employee name and code.

#include<iostream>
using namespace std;
class Base{
    private: 
      char name[30],designation[30];
      int code;
    public:
      void getdata(){
          cout<<"Enter the name of the employee: ";
          cin>>name;
          cout<<"Enter the designation of the employee: ";
          cin>>designation;
          cout<<"Enter the code of the employee: ";
          cin>>code;
      }
      void display(){
          cout<<"Name of the employee: "<<name<<endl;
          cout<<"Designation of the employee: "<<designation<<endl;
          cout<<"Code of the employee: "<<code<<endl;
      }
      
};
class Derived:virtual public Base{
    private:
      int experience,age;
    public: 
      void getdata(){
          cout<<"Enter the years of experience: ";
          cin>>experience;
          cout<<"Enter the Age";
          cin>>age;
      }
      void display(){
          cout<<"Years of experience: "<<experience<<endl;
          cout<<"Age : "<<age<<endl;
      }
};  

class Details:public Derived{
    public:
      void getdata(){
          Base::getdata();
          Derived::getdata();
         
      }
      void display(){
          Base::display();
          Derived::display();
        
      }
};
int main(){
    Details d;
    d.getdata();
    d.display();
    return 0;
}

