//polymorphism means existing multiple forms
//like my father is a multiple form of father, husband and Son
//1 is compile time  and another is run time polymorphism

//compile time polymorphism is of 2 types Function and operator overloading

//function overloading can be done with same function name and differnet type of arguments(char,strig,int),or same function name and different numbers of arguments like in 1st function 2, in 2nd function 3 like these 
#include<iostream>
using namespace std;


//function overLoading
class A{
    public:
        void sayHello(){
            cout<<"Hello";
        }
        void sayHello(string name){
            cout<<"hello";
        }
        int sayHello(char name){
            cout<<"hello";
        }
        int sayHello(char name,string greet){
            cout<<"hello";
        }
};
//operator overloading
//a+b = + is operator b is operand which  2nd argument and a is operand which is  this.object or current object
//syntax is return type - operator - input argument(2nd argument)
class B{
    public:
        int a;
        int b;
        void operator+(B &obj){
        // int value1 = this->a;
        // int value2 = obj.a;
        //cout<<"output is "<<value2-value1;
        }
        void operator() (){
            cout<<"I am the brackett"<<this->a;
        }
    
};

//run time polymorphism
class Animal{
    public:
        void speak(){
            cout<<"speaking";
        }
};
class Dog:public Animal{//this is inherited from Animal class
    public:
        void speak(){
            cout<<"Barking";
        }
};
int main(){
    A sam;
    sam.sayHello();

    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1+obj2;
    obj1();
    
    Dog black;
    black.speak();//it will print barking 
    //if the speak function is not there in Dog class 
    //then it would print Speaking
}