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

int main(){
    Dog Labra;
    Labra.speaking();
}