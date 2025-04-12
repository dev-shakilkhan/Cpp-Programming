#include<iostream>
#include<string>

using namespace std;

int main(){
    string myName = "Shohan Khan";
    myName[0] ='M';
    myName.at(1) = 'o';
    cout<< myName <<endl;
}