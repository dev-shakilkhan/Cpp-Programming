#include<iostream>
#include<string>

using namespace std;

int main(){
    string tex = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The Length of the tex is: "<< tex.length()<<endl;
    string tex2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234";
    cout << "The Length of the tex is: "<< tex2.size();
    return 0;
}