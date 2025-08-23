#include<iostream>
#include<string>

using namespace std;

int main() {
    int age;
    cout<<"Enter your age = ";
    cin>>age;
    string ageStatus = (age>=18)?"Adult":"Not Adult";
    cout<<ageStatus<<endl;
    return 0;
}