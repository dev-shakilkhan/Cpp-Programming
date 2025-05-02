#include<iostream>
using namespace std;

int main(){
    int arr[]= {4,2,7,8,1,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        if (arr[i]==8){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}