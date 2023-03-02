#include<iostream>
using namespace std;
int main(){
    int age ;
    cout << " Enter Age "; 
    cin >> age ; 
    try{
        if ( age >= 18){
            cout << " Access Granted , You are old enough ";
        }else{
            throw(age);
        }
    }catch(int mynum){
        cout << " Access Denied , You must be at least 18 years old ";
        cout << " Age is " << mynum ; 
    }
}