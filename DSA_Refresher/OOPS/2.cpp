#include<iostream>
using namespace std;

//we can still access private data members using getter and setter functions
class Hero{
    private:
    int health;
    public:
    int level;
    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){


    //object creation using statis allocation
Hero a;
a.setHealth(80);
cout<<"health statically is "<<a.getHealth();

//object creation using dynamic allocation
Hero *b = new Hero;
b->setHealth(90);
cout<<"health dynamically is "<<(*b).getHealth();
//or
cout<<"health dynamically is "<<b->getHealth();
//     Hero Samar;
//     cout<<"Samar health is "<<Samar.getHealth()<<endl;
//     Samar.setHealth(80);
//     Samar.level= 'A';
//     cout<<"Now Samar health is "<<Samar.getHealth()<<endl;
//     cout<<"Samar Level is "<<Samar.getLevel();
//     cout<<"Size of samar object is "<<sizeof(Samar);
 }