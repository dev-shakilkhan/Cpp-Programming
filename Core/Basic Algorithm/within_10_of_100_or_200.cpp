#include<iostream>
using namespace std;

bool test(int x){
    return x>=90 && x<=200;
}

int main(){
    cout<<test(201)<< endl;
    cout<<test(200)<< endl;
    cout<<test(150)<< endl;
    cout<<test(103)<< endl;
    cout<<test(90)<< endl;
    cout<<test(89)<< endl;
}