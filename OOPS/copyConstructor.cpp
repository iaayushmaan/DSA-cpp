#include<iostream>
#include<cstring>
using namespace std;

class student{
    public:
    char* name;
    char gender;

    student(){
        name = new char[100];
    }
    student( char gender){
        this->gender=gender;
        cout<<"Parameterised constructor"<<endl;
    }
    //Copy constructor
    //Deep copy
    // student(student& temp){
    //     char* ch=new char[strlen(temp.name)+1];
    //     strcpy(ch,temp.name);
    //     this->name=ch;
    //     this->gender=temp.gender;
    // }
    void print(){
        cout<<this->name<<endl;
        cout<<this->gender<<endl;
    } 

    void setName(char name[]){
        strcpy(this->name,name);
    }
};

int main(){
    student a;
    char name[11]="Aayushmaan";
    a.setName(name);
    a.gender='M';
    a.print();
    //Copy Constructor
    student b(a);
    b.print();
    //Shallow Copy
    a.name[0]='B';
    a.print();
    b.print();
}