#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream F;
    // Opening File in input and Output Mode 
    F.open("temp.txt",ios::in | ios::out);

    // Getting Current Location 
    cout << F.tellg() << endl;

    // Seeking 8 bytes 
    

     

}