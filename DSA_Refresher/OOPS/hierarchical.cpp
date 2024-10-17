//one class serve as parent class fro more than one class;

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

int main(){
    Dog Labra;
    Tiger bengal;
    Labra.speaking();
    bengal.speaking();
}