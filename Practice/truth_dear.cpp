#include<iostream>
using namespace std;

void Truth(){
    cout<<"Tell truth your are hiding!"<<endl;
}
void Dear(){
    cout<<"Do what you wnat's to do!"<<endl;
}

int main(){
    int deacision;
    while(1>0){
        cout<<endl<<endl<<endl;
        cout<<"Chose your deacision !"<<endl;
        cout<<"======================"<<endl;
        cout<<" 1. Truth "<<endl;
        cout<<" 2. Dear "<<endl;
        cout<<" 3. Exit "<<endl;
        cout<<" => ";
        cin>>deacision;
        if (deacision > 0 && deacision < 2){
            if(deacision == 1){
                Truth();
            }else if(deacision == 2){
                Dear();
            }
        }else if (deacision == 3)
        {
            break;
        }else{
            cout<<"Enter a valid choice"<<endl;
        }
    }

    return 0;
}