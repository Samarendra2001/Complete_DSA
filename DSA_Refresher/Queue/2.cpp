//queue using arrays
//enque means insertion
//deque means pop
#include<iostream>
using namespace std;
class Queue{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    Queue(int size){
        this->size = size;
        arr=new int[size];
        front=rear=0;
    }
    void enque(int element){
        if(rear==size){
            cout<<"queue is full";
        }else{
            arr[rear]=element;
            rear++;
        }
    }
    int deque(){
        if(front==rear){//check queue is empty or not
            return -1;
        }else{
            int ans = arr[front];//it will return the poped element
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
            return ans;
        }
    }
    int Front(){
        if(front==rear){
            return -1;
        }
        else return arr[front];
    }
    bool isEmpty(){
        if(front==rear){
            return true;
        }else return false;
    }

};

int main(){
    Queue Q(6);
    Q.enque(280);
    Q.enque(24);
    Q.enque(203);
    Q.enque(28);
    Q.enque(22);
    Q.enque(23);
    cout<<"front is"<<Q.Front()<<endl;
    Q.deque();
    cout<<"front is"<<Q.Front();

}