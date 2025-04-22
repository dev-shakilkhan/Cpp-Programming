#include<iostream>
#include<string>
using namespace std;

int main(){
    int intnum = 10; //implicite typeconversion means small to big.
    double doublenum = intnum; //This is implicite type casting (int -> double)

    char character = 'A';
    int intcharecter = character;  // (char -> interger)

    cout<<"size of int number = "<<sizeof(intnum);

    return 0;
}