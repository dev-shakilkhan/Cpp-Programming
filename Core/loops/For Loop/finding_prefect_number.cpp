#include<iostream>
using namespace std;

int main(){
    int num, sum;
    for(num =1;num<=500;num++){
        sum =0;
        for (int i = 1; i<num; i++){
            if(num% i ==0){
                sum += i;
            }
        }
        if (sum == num){
            cout<< num<<" ";
        }
    }
    cout<<endl;
    return 0;
}