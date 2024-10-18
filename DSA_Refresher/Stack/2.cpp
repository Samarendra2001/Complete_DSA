//stack implementation using array
//for pop function how it works by just doing top --
// top holds the index of the current top element. When you do top--, you're just moving the top index one step down.
// You’re not actually "deleting" the data from the array. You're simply saying, "I no longer consider the current top element 
//as part of the stack." The top now points to the next valid element below it.
// Why This Works:

// When you later call push(), the new element will overwrite whatever was stored in the previous 
//"top" position (the old element that was effectively popped). The stack only considers elements up to the top index,
// so anything beyond that is irrelevant.
// Array Memory:

// The elements in the array arr[] are not actually deleted. The array simply ignores elements beyond the top index.
// For example, if top == 2, the elements at arr[3], arr[4], etc., may still hold values, but those values are no longer part of the active stack.
// The reason we use int *arr (a pointer) instead of just int arr[] or int arr in the class Stack is due to dynamic memory allocation. Here's why:

// Key Points:
// Dynamic vs. Static Array:

// If you write int arr[size]; (without a pointer), the size of the array must be known at compile-time. This approach is called static memory allocation, and it means that the array's size is fixed at the moment you declare it.
// In competitive programming or real-world applications, you often don’t know how big the stack will be in advance. Thus, you need the flexibility to allocate the array size at runtime based on the size you require dynamically.
// int *arr: A Pointer for Dynamic Memory:

// When you declare int *arr, you're creating a pointer that can point to any block of memory, which you can allocate dynamically using new or malloc().
// This allows you to set the size of the array during runtime. For example:
// cpp
// Copy code
// arr = new int[size]; // Dynamically allocates an array of size 'size'
// This is useful when the stack size is determined at runtime (for example, by user input or other conditions).
// Flexibility:

// Using int *arr, you can change the size of the stack easily. You can deallocate the current memory and reallocate a new array of different size, which isn’t possible with statically sized arrays.
// With int *arr, you can also create arrays on the heap (dynamically allocated memory), whereas int arr[size] would create the array on the stack (local memory).
// Lifetime of the Array:

// By using dynamic memory allocation with int *arr, the memory exists as long as you explicitly deallocate it using delete[] arr; or at the end of the object's lifetime.
// If you use a fixed-size array like int arr[size];, it would be deallocated automatically when the function or object scope ends, limiting its flexibility for larger or dynamically changing data structures.
#include<iostream>
using namespace std;

class Stack{
    public:
        int size;
        int *arr; //it means the array pointer which helps us to create dynamic array and allocate size during run time
        int top;//it is created to keep track of top element and helps us in push and pop operation
    Stack(int size){//constructor cretaed
        this->size = size;
        arr = new int[size];//array created dynamially
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