//Constructor and destructor

//when an object is created an constructor is called
 //when we create Hero samar a constructor of Samar.Hero() is called which is not visible but it is called automatically
 //when an object is created , this is called default Constructor.

 #include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    int level;
    Hero(){
        //This is the constructor;
        //when we write the custom constructor the default constructor will not be there any more
        cout<<"Constructor Called when only Object Sam created";
    }
    //parametrised Constructor
    Hero(int health){
        this->health = health;//here this refers to current object that means Samar
        //so we are putting the health value in Sam2's health
        //you can check by the address of this and Sam2 ,it will be same
        cout<<"this->"<<this<<endl;
    }
    //copy constructor
    Hero(Hero& temp){
        this->health =  temp.health;
    }
    //Destructor means to deallocate memory
    //Destructor is called automatically for static created object
    //And for dynamically created object we have to called destructor dynamically
    ~Hero(){
        cout<<"destructor called";
    }
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
   

// this is called copy constructor. And it is also automatically created when object is created. And also we ca create our own custom copy constructor.
Hero Barick(90);
Hero Sam(Barick);
cout<<Sam.getHealth()<<endl;
cout<<Barick.getHealth();

Hero a;
Hero *b = new Hero;
//destructor called manually
delete b;











    // Hero Sam;
    // Hero Sam2(90);
    // cout<<Sam2.getHealth()<<endl;
    // Hero *Sam1 = new Hero;
    // Hero *Sam3 =  new Hero(95);
    // cout<<"health of Sam3 dynamic is "<<Sam3->getHealth()<<endl;
    // cout<<"address of Sam2 is "<<&Sam2<<endl;
    //constructor will be called for 2 times as object is created two times
    //1 is statically and 1 is dynamically
}