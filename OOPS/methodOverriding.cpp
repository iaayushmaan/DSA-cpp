#include<iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"I can speak"<<endl;
    }
 };

class Dog : public Animal{
    public:
    void speak(){
        cout<<"I can bark"<<endl;
    }
};

int main(){
    //Method Overriding 
    Animal ob1;
    ob1.speak();
    Dog ob2;
    ob2.speak();
    return 0;
}