//queue
//first In first out(fifo) order
//front and rear will be used . insertion will be done by rear and pop will be done by front
//queue using stl

#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(18);
    q.push(11);
    q.push(12);
    q.push(14);
    cout<<q.size()<<endl;
    cout<<"front "<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<"front "<<q.front();
}
