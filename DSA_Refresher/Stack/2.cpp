//stack implementation using array
//for pop function how it works by just doing top --
// top holds the index of the current top element. When you do top--, you're just moving the top index one step down.
// You’re not actually "deleting" the data from the array. You're simply saying, "I no longer consider the current top element as part of the stack." The top now points to the next valid element below it.
// Why This Works:

// When you later call push(), the new element will overwrite whatever was stored in the previous "top" position (the old element that was effectively popped). The stack only considers elements up to the top index, so anything beyond that is irrelevant.
// Array Memory:

// The elements in the array arr[] are not actually deleted. The array simply ignores elements beyond the top index. For example, if top == 2, the elements at arr[3], arr[4], etc., may still hold values, but those values are no longer part of the active stack.
#include<iostream>
using namespace std;

class Stack{
    public:
        int size;
        int *arr; 
        int top;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top =-1;
    }
    void push(int element){
        if(size-top>1){//checking size if space is there or not
            top++;//if space then increment top 
            arr[top]=element;//and push element
        }else{
            cout<<"stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){//check if stack is not empty
            top--;
        }else{
            cout<<"stack umderflow"<<endl;
        }
    }
    int peak(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"stack is empty";
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }else return false;
    }
};

int main(){
    Stack st(5);
    st.push(10);
    st.push(12);
    st.push(18);
    st.push(13);
    st.push(12);

    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak();
}