//TwoStack implementation in a single array
//here we need two top 
//one top is used to insert data from left to right while top =-1
//another top is used to insert data from right to left while top =size;
#include<iostream>
using namespace std;

class TwoStack{
    public:
    int top1;
    int top2;
    int size;
    int *arr;

    TwoStack(int size){
        this->size = size;
        top1=-1;
        top2 = size;
        arr = new int[size];
    }
    void push1(int element){
        if(top2-top1>1){
            top1++;
            arr[top1]= element;
        }else{
            cout<<"stackOverFlow";
        }
    }
    void push2(int element){
        if(top2-top1>1){
            top2--;
            arr[top2]=element;
        }else{
            cout<<"stackOverFlow";
        }

    }
};
//similarly write all other functions