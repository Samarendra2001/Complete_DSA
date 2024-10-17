//suppose two classes A and B are there and another class C is there who will inherit from both A and B class

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
       void speak(){
        cout<<"talking";
       }
};
//multiple Inheritance

class Hybrid:public Animal, public Human{

};
int main(){
    Hybrid legend;
    legend.speak();
    legend.speaking();
}