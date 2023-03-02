#include <iostream>
using namespace std;
class Shape
{
protected:
    int base, height;
    void getData()
    {
        cout << "\n Enter Height " ;
        cin >> height;
    }
    void putData()
    {
        cout << "\n Height = " << height ;
    }
};
class Area_Square : protected Shape
{
    public : 
    void show(){
        getData();
        cout << "\n Area of Square " << height*height;
    }
};
class Area_Triangle : protected Shape
{
public : void show(){
    getData();
    cout <<"\n Enter Base ";
    cin >> base;
    cout << "\n Area of Triangle is = " << 0.5*height*base;
}
};
int main(){
    Area_Square A;
    A.show();
    Area_Triangle T;
    T.show();
}
