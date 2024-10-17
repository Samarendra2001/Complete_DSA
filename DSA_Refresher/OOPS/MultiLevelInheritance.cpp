#include<iostream>
using namespace std;

class Animal{
    public:
        int color;
        int name;
        int height;
    public:
    void speaking(){
        cout<<"Speaking";
    }
};

class Dog: public Animal{

};
class Tiger:public Dog{

};
class Lion:public Tiger{

};
int main(){
    Dog Labra;
    Tiger yellow;
    Lion Blue;
    yellow.speaking();
    Blue.speaking();
    Labra.speaking();
}