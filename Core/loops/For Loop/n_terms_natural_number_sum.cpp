#include<iostream>
using namespace std;

int main(){
    int total = 0;
    int n;
    cout<<"input how many ternms to sum : ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        cout<<i<<" ";
        total = total +i;
    }
    cout<<"\nThe Sum of first 10 natural numbers: "<<total<<endl;
    return 0;
}