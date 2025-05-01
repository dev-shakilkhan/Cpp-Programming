#include<iostream>
using namespace std;
int test(int a,int x){
    //using tenary oprerator;
    return x >= a ? x-a : a-x;
}
int main(){
    cout<<test(51,22)<<endl;
    cout<<test(51,53)<<endl;
    cout<<test(51,30)<<endl;
    cout<<test(51,51)<<endl;
    return 0;
}