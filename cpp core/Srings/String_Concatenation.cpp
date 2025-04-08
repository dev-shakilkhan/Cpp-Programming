#include<iostream>
#include<string>

using namespace std;
//The + operator can be used between strings to add them together to make a new string. This is called concatenation

int main(){
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    cout <<fullName<<endl;
    return 0;
}