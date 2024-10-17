//String - one dimensional character array
//in character arrays or in string if there is empty pace in them the it will be stored in null value;
//if you'll give space,tab or new entry in input or in cin then it will not take the second character
//every string is or ch array is stored in memory with a null character
//if the program sees a null character then it will stop executng right away


//length of a string
//name - Barick -----> B a r i c k \0

#include<iostream>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;

}
int main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<<"your name is "<<name <<endl;
    cout<<"length of you name is "<<getLength(name)<<endl;
}