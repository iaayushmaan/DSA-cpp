#include<iostream>
using namespace std;

class student{
    private:
    int roll;
    public:
    string name;

    void setroll(int r){
        roll=r;
    }
    int getroll(){
        return roll;
    }
};

int main(){
    //Static allocation
    student a;
    a.setroll(15);
    a.name="Aman";
    cout<<"Roll "<<a.getroll()<<endl;
    cout<<"Name "<<a.name<<endl;

    //Dynamic allocation
    student *b=new student;
    b->setroll(17);
    b->name="Ram";
    // cout<<"Roll "<<b->getroll()<<endl;
    // cout<<"Name "<<b->name<<endl;
    //              OR
    cout<<"Roll "<<(*b).getroll()<<endl;
    cout<<"Name "<<(*b).name<<endl;

}
