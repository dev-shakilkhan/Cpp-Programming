#include<iostream>
using namespace std;

int Function(int n, int a, int b, int c){
    if(n == 1){
        return a+c;
    }else{
        return Function(n-1, a, c, b) + Function(n-1, b, a, c);
    }
}

int main(){
    cout<<"The Number is = "<<Function(4, 1, 2, 3)<<endl;
    return 0;
}