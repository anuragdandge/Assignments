#include<iostream>
using namespace std;
bool isBigger(int n){
   if(n > 10){
    return true;
   }else{
    return false;
   }
}
int main(){
    cout << isBigger(5);
}