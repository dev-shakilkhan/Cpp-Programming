#include<iostream>
using namespace std;
int test(int x, int y){
    //using tenary oprerator;
    return x == y ? ((x+y)*3) : (x+y);
}
int main(){
    cout<<test(1,2)<<endl;
    cout<<test(3,2)<<endl;
    cout<<test(2,2)<<endl;
    cout<<test(5,5)<<endl;
    return 0;
}