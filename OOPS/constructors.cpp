#include<iostream>
using namespace std;

class student{
    public:
    int roll;
    char gender;

    //Default constructor
    student(){
        cout<<"Default constructor"<<endl;
    }
    //Parameterised constructor
    student(int roll, char gender){
        this->roll=roll;
        this->gender=gender;
        cout<<"Parameterised constructor"<<endl;
    }
    void print(){
        cout<<this->roll<<endl;
        cout<<this->gender<<endl;
    } 

};

int main(){
    student a(10,'M');
    a.print();
    //Copy Constructor
    student b(a);
    b.print();
}