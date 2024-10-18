//Stack
//Last in First Out (LIFO) order
//push means insert
//pop means delete
//top = top element
//Empty = stack is empty or not
//stack using stl

#include<iostream>
#include<stack>//stl stack included
using namespace std;

int main(){
    //creation of Stack
    stack<int> s;//a stack is created of name s
    //push operation
    s.push(2);
    s.push(5);
    s.push(50);
    s.push(20);
    s.push(44);
    s.push(65);
    //pop operation
    s.pop();
    cout<<"printing the top element"<<s.top()<< endl;
    if(s.empty()){
        cout<<"stack is empty";
    }else cout<<"stack is not empty";
    cout<<"size of stack is "<<s.size()<<endl;

    return 0;
}