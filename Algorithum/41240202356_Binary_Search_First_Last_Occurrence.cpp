#include<iostream>
using namespace std;

int First_Occurance(int array[], int size, int target){
    int low = 0, high = size-1, result = -1;
    while(low<= high){
        int mid = (low + high)/2;
        if(array[mid]== target){
            result = mid;
            high = mid-1;
        }else if(array[mid]<target){
            low = mid + 1;
        }else {
            high = mid - 1;
        }
        
    }
    return result;
}

int last_Occurance(int array[], int size, int target){
    int low = 0, high = size-1, result = -1;
    while(low<= high){
        int mid = (low + high)/2;
        if(array[mid]== target){
            result = mid;
            low = mid+1;
        }else if(array[mid]>target){
            low = mid + 1;
        }else {
            high = mid - 1;
        }
        
    }
    return result;
}

int main(){
    int size;
    cout<<"Enter the Size of array= ";
    cin>>size;
    int array[size];
    cout<<"Enter the array values = ";
    for(int i = 0; i<size; i++){
        cin>>array[i];
    }
    int target;
    cout<<"Enter the Target value = ";
    cin>> target;

    int first = First_Occurance( array,  size,  target);
    int last = last_Occurance( array, size, target);

    cout<<"The fist Occurance is = "<<first<<endl;
    cout<<"The last Occurance is = "<<last<<endl;

    return 0;
    
}