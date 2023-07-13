#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int roll;

    void setRoll(int roll){
        this->roll=roll;
    }

    void getRoll(){
        cout<<this->roll<<endl;
    }

    void print(){
        cout<< "Class 1 called"<<endl;
    }    
};
//Inheritance
class male : public student{
    public :
    int age;

    void happy(){
    cout<< "Class 2 called"<<endl;
    }
};

int main(){
    male obj1;
    obj1.setRoll(10);
    cout<< obj1.roll<<endl;
    obj1.print();
    obj1.happy();
    return 0;
}