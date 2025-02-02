#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number = ";
    cin>>a;
    if(a == 0){
        cout<<" The number is not even or odd";
    }
    else if(a %2 == 0){
        cout<<"The number is Even";
    }
    else{
        cout<<"The number is Odd";
    }
}