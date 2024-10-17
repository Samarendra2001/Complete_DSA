//suppose you have A and B two classes and C is another classes and C wants to inherit from 
//both A and B. But A and B has one function each which has same name .
//then when c want to call the function with same name then which one will be called 
//that's why we use Scope resolution operator ::

#include<iostream>
using namespace std;

class Animal{
    public:
        int color;
        int name;
        int height;
    public:
    void speaking(){
        cout<<"Barking";
    }
};

class Human{
    public:
       string weight;
       void speaking(){
        cout<<"talking";
       }
};
//multiple Inheritance

class Hybrid:public Animal, public Human{

};
int main(){
    Hybrid legend;
    legend.Human::speaking();
    legend.Animal::speaking();
}