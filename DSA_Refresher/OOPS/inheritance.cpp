//suppose you have a class and have some properties and another class got the same
//same properties by inheriting
#include<iostream>
using namespace std;

class Human{
    public:
        int height;
        int weight;
        int age;

        public:
        int getAge(){
            return this->age;
        }
        void setWeight(int w){
            this->weight = w;
        }
};
//private data members of parent class can not be inherited in any way.
class Male: public Human{
    public:
        string color;

        void sleep(){
            cout<<"male is sleeping";
        }
};

//types of inheritance
//Single,MULTI-LEVEL,MULTIPLE,HYBRID,HIERARCHICAL
int main(){
    Male Sam;
    Sam.setWeight(60);
    cout<<Sam.age<<endl;
    cout<<Sam.weight<<endl;
    cout<<Sam.height<<endl;
    Sam.sleep();
    cout<<Sam.color;
}