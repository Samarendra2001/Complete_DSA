//LL is one type of linear data structure which is made up of collection of  nodes
//nodes is the data members which has some data and address of next nodes
//it is a dynamic data structure
//you can grw and shrink in run time without memory wastage
//And the last node always point to null
//in nodes data is of int type and the pointer points to a node so the pointer type will be of node type
//singly linked list means which has nodes with data and a pointer , points to next node with a link .
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this->data=data;
        this->next= NULL;
    }
    ~Node(){
        int value = this->data;//This stores the value of the node's data member into a local variable value. The purpose here is to keep track of the node's data before its memory is released, which can be useful for debugging or printing information later.
        //memory free
        if(this->next!=NULL){//here we are checking ,the node which we want to delete ,it;s next is null or not that means we want to delete its link also.
            delete next;//if not NULL then delete its chain or link
            this->next = NULL;//then points its next to  NULL. just remember it is the node which we want to delete . It has a next pointer(link) points to next node which we want to delete .if we delete the link it will free. and after that we can delete the free node.
        }
        cout<<"Memory is free for node with data"<<value<<endl;
    }
};
//Insertion at head
//Node* head: Passes a copy of the pointer. Changes inside the function will not affect the original linked list's head pointer.
//Node* &head: Passes the pointer by reference. Changes inside the function will affect the original linked list, allowing you to modify the head pointer directly.
void InsertAtHead(Node* &head ,int d){
    Node* temp = new Node(d);//new node temp created
    temp->next = head;//The next pointer of the new node (temp) is made to point to the current head node, which links the new node to the existing list.
    head = temp;//The head pointer is updated to point to the new node (temp), making it the new head of the list.

}
//Insert at Tail
//it will add new node at ending node
//so we'll crate a tail pointer which will point to the last node
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail=temp;
}
//insert at middle or in any position
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    //if we have to put at 1st node
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    //if position is in some where in between first and last
    Node* temp = head;
    int cnt =1;//cnt is 1 bcz head is at 1
    while(cnt<position-1){
        temp = temp->next;//traveersing through node 1st temp = head and then we increase it every step till count<position-1
        cnt++;
    }
    //if position is at last
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    // new Node creation
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next=nodeToInsert;
}
//Deletion of node
void deleteNode(Node* &head ,Node* &tail,int position){
    // Check if the list is empty
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    //deleting the first or start node
    if(position==1){
        Node* temp = head;//temporary temp created pointing to head
        head=head->next;//move head to head->next
        // If the list has only one node, update the tail pointer
        if (head == NULL) {
            tail = NULL;  // The list is now empty
        }

        temp->next = NULL;//then now head is on 2nd node 
        delete temp;//free the temp node as it is dynamically declared. Also destructor called

    }else{
        //deleting all other node
        Node* curr = head;
        Node* prev = NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;//bcz prev waas null so we have to move the prev to curr . here prev and curr at same node .
            curr=curr->next;
            cnt++;
            }
        // If the node to be deleted is the last node
        if (curr != NULL && curr->next == NULL) {
        // Update the tail pointer to point to the previous node
        tail = prev;
        }

        // If curr is NULL, it means the position is out of bounds
        if (curr == NULL) {
        cout << "Position out of bounds." << endl;
        return;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
//print the linkedList
void PrintLinkedList(Node* &head){
    if(head==NULL){
        cout<<"List is Empty";
        return;
    }
    Node* temp = head;//Node* temp = head;: A temporary pointer (temp) is created and initialized to point to the head node.
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
   }
   cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    //cout<<node1->next;
    //The head pointer is set to point to the first node (node1). This establishes the start of the linked list.
    Node* head = node1;
    Node* tail = node1;
    PrintLinkedList(head);
    InsertAtHead(head,18);
    //PrintLinkedList(head);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtPosition(head,tail,3,42);
    PrintLinkedList(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    deleteNode(head,tail,3);
    PrintLinkedList(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    deleteNode(head,tail,4);
     PrintLinkedList(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
}