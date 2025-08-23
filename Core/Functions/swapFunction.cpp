#include<iostream>
#include<string>
using namespace std;

template<typename a, typename b>
void swapp( a &x, b &y){
    double z = x;
    x = y;
    y = z;
}

template<>
void swapp<string>(string a, string b){
    string c = a;
    a = b;
    b = a;
}

int main(){
    int x = 20;
    int y = 50;
    string firstName = "Shakil";
    string lastName = "Khan";
    string name = firstName + lastName;
    cout<<"x = "<<x<< "and y = "<<y<<endl;
    cout<< name;
    swapp(x,y);
    swapp(firstName, lastName);
    cout<<"x = "<<x<< "and y = "<<y<<endl;
    cout<< name;
    return 0;
}