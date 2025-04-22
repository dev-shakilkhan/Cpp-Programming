#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string section;
    int id;
    string name;
    float mark;
    void displayStudent(){
        cout<< "Name = "<<name<<endl;
        cout<< "Section = "<<section<<endl;
        cout<< "ID = "<<id<<endl;
        cout<< "Mark = "<<mark<<endl;
    }
};

class Result: public Student {
    public:
    void gradeCalcute(){
        if (mark == 4.00){
            cout<<"You got \"A+\""<<endl;
        }else if(4.0> mark >= 3.75){
            cout<<"You got \"A\""<<endl;
        }else if(3.75> mark >= 3.50){
            cout<<"Your got \"A-\"";
        }else if(3.50> mark >= 3.25){
            cout<<"Your got \"B+\"";
        }else if(3.25> mark >= 3.00){
            cout<<"Your got \"B\"";
        }else if(3.00> mark >= 2.75){
            cout<<"Your got \"B-\"";
        }else if(2.75> mark >= 2.50){
            cout<<"Your got \"C+\"";
        }else if(2.50> mark >= 2.25){
            cout<<"Your got \"C\"";
        }else if(2.25> mark >= 2.00){
            cout<<"Your got \"D\"";
        }else if(2.00> mark >= 0.00){
            cout<<"Your got \"F\"";
        }else{
            cout<<"Invalid Grade!";
        }
    }
    void displayResult(){
        displayStudent();
        gradeCalcute();
    }
};

int main(){
    Result ob;
    ob.name = "Shakil Khan";
    ob.section = "D";
    ob.id = 2356;
    ob.mark = 4.00;
    ob.displayResult();
    return 0;
}
