#include<iostream>
using namespace std;
int main(){
    int num1,den ;
    cout << " Enter Number \n"; 
    cin >> num1  ; 
    cout << " Enter Denominator \n"; 
    cin >> den; 
    try{
        if ( den != 0 ){
            cout << " Division = ";
            cout << ( num1/den ); 
        }else{
            throw(den);
        }
    }catch(int mynum){
        cout << " Cannot Perform operation  ";
        cout << " Denominator is  " << mynum ; 
    }
}



// 