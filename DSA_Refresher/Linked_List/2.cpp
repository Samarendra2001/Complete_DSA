//doublyLinkedList
//here we'll have a data and two pointer previous and next pointrer
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

   //constructor
   Node(int d){
    this->data=d;
    this->next=NULL;
    this->prev=NULL;
   }
};
void insertAthead(Node* &head,int d){
    Node*temp = new Node(d);//create a new Node temp
    temp->next = head;//now let temp's next pointer points to head
    head->prev= temp;//let head's prev pointer points to temp
    head= temp;//now change head to temp
}
void insertAtTail(Node* &tail,int d){
    Node*temp = new Node(d);//create node
    tail->next = temp;//let tail's next pointer points to temp 
    temp->prev = tail;//let temp's prev pointer points to tail
    tail=temp;//now change tail to temp;
}
void printNode(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getLength(Node* head){
    int len=0;
    Node*temp = head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
int main(){
    Node* node1 = new Node(20);
    Node* head = node1;
    Node* tail = node1;
    printNode(head);
    cout<<getLength(head)<<endl;
    insertAthead(head,30);
    printNode(head);
    insertAtTail(tail,40);
    printNode(head);
}