//encapsulation = wrapping up Data members and functions in a sigle entity
//fully encapsulated means all data members are private
//encapsulation  means data or information hiding
//it helps in unit testing

#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int height;
    public:
        int getAge(){
            return this->age;
        }
};
int main(){
    Student sam;
    cout<<"everything is working fine";
}