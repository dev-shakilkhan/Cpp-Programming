#include<iostream>
using namespace std;

int main(){
    int total = 0;
    for(int i = 1; i<=10; i++){
        cout<<i<<" ";
        total = total +i;
    }
    cout<<"\nThe Sum of first 10 natural numbers: "<<total<<endl;
    return 0;
}