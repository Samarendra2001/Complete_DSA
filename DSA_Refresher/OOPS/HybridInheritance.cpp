//it is the combination of more than one type of inheritance
//be  it single,multilvel,multiple or something else

//one class serve as parent class fro more than one class;
//here we have used single and hierarchical inheritance
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

class Dog: public Animal{

};
class Tiger:public Animal{

};
//here we have used single inheritance
class Lion:public Tiger{

};

int main(){
    Dog Labra;
    Tiger bengal;
    Labra.speaking();
    bengal.speaking();
    Lion Leo;
    Leo.speaking();
}