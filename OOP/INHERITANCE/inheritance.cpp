#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
        string name;
        int age;
        Person(){

        }
        void display1(){
            cout<<"Name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
        }
};

class Student : public Person{
    public:
        int id;
        Student(){

        }
        void display2(){
            display1();
            cout<<"ID : "<<id<<endl;
        }  
};

int main(){
    Student one;
    one.name= "Shakil Khan";
    one.id = 2356;
    one.age = 21;
    one.display2();

    return 0;
}