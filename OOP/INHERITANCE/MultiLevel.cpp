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
        cout<<"Person"<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
    }
};

class Student : public Person {
    public:
    int id;
    Student(){

    }
    void display2(){
        display1();
        cout<<"Id :"<<id<<endl;
    }
};

class PostgraguateStudent: public Student{
    public:
    float graduationCGPA;
    void display3(){
        display2();
        cout<<"CGPA : "<<graduationCGPA<<endl;
        if(id == 2242){
            cout<<name<<" is CR.\n";
        }else{
            cout<<"Not CR\n";
        }
        if(graduationCGPA >= 3.9){
            cout<<"He is eligible for Dean's award";
        }else{
            cout<<"Not eligible for Dean's award";
        }
    }
};

int main(){
    PostgraguateStudent ob1;
    ob1.name = "shakil kahn";
    ob1.id = 2356;
    ob1.graduationCGPA = 3.29;
    ob1.display3();
    
}