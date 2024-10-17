#include<iostream>
using namespace std;
//class initialization
//by dfault access modifirs is private.
class Hero {
    //properties or data members
    public://it can  be accessed everywhere outside or inside the class
    int health;
    private: //this can be acheived only inside the class
    int height;
    void print(){
        cout<< height <<endl;
    }
};

class Villain{

};
int  main(){
    //object creation 
    Hero h1;
    Villain v1;
    cout<<"size of this object is " <<sizeof(h1);
    cout<<"size of this object is " <<sizeof(v1);
//to access the properties or data members 
    h1.health = 80;

    cout<<h1.health;

}
//for empty class the size of the object will be always 1 byte because of identification or to track that object it is given 1 byte of memory.
//we can include class file in main file and use it by including
//#include"className.cpp"