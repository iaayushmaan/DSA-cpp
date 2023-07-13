#include<iostream>
using namespace std;        

class Complex{
    private:
    int real,imag;

    public:
    Complex(int r=0,int i=0){
        real = r;
        imag = i;
    }

    Complex operator + (Complex &obj){
        Complex res;
        res.imag = imag+obj.imag;
        res.real = real+obj.real;
        return res;
    }
    void display(){
        cout<<real<<" +i"<<imag<<endl;
    }
};

int main(){
    Complex obj1(7,4);
    Complex obj2(3,10);
    Complex obj3=obj1+obj2;
    obj3.display();
    return 0;
}