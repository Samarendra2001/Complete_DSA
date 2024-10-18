//circular Linked List
//here only one change, the last node of every liked list which points to NULL
//here it points to first node of the linked list y forming a circle 
//this is why it is called circular linke list
//in circular linked list we don't need head pointer
//we can do all those things using only tail pointer
//As tail's next pointer points towards the first node of LL which we called generally head
//so we can access that using tail. So we don't need head pointer 
#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void insertNode(Node* &tail,int element,int d){

}
int main(){
Node* node1= new Node(30);
Node* tail = node1;
}