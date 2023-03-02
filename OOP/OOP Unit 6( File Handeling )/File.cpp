#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    char str[80];
    cout << " Enter A String ";
    cin >> str;
    int len = strlen(str);

    fstream file ; 
    file.open("TEXT",ios::in|ios::out);

    

}
