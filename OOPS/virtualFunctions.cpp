// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     virtual void eat(){
//         cout<<"I eat generic food"<<endl;
//     }
//  };

// class Dog : public Animal{
//     public:
//     void eat(){
//         cout<<"I eat dog food"<<endl;
//     }
// };

// class Cat : public Animal{
//     public:
//     void eat(){
//         cout<<"I eat cat food"<<endl;
//     }
// };

// void func(Animal *x){
//     x->eat();
// }

// int main(){
//     //Run time polymorphism
//     Animal *ptr;
//     Cat catObj;
//     Dog dogObj;
//     ptr=&catObj;
//     func(ptr);
//     ptr=&dogObj;
//     func(ptr);

//     return 0;
// }

#include<iostream>
using namespace std;

int bearAndBigBrother(int a,int b){
    int c=0;
    if(a>b) c=0;
    else{
        while(a<=b){
            a=a*3;
            b=b*2;
            c++;
        }
    }
    return c;
}

int main(){
    int a,b;
    cin>>a,b;
    cout<<bearAndBigBrother(a,b)<<endl;
    return 0;
}