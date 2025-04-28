#include<iostream>

using namespace std;

string test(string s){
    if (s.length()> 2 && s.substr(0,1) == "if"){
        return s;
    }
    return "if " + s;
}

int main(){
    cout <<test("if shakil done well")<< endl;
    cout <<test("can shakil do it")<<endl;
    return 0;
}