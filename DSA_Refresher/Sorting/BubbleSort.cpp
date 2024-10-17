#include<iostream>
using namespace std;



//bubble sort
//this sort swaps its neighbouring elememnt
//1st iteration 0th and 1th
//2nd iteration 1th and 2nd and so on which is smaller then swap
//then this is the 1st round and in this round the nth index is sorted

int bubbleSort(int arr[],int n){
    for(int i= 1;i<n;i++){
        for(int j=0;j<n-i;j++){//bcz in every round one element is already getting sorted so we are not checking till the last element bcz last one is already sorted
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
//optimized bubble sort 
int optimizedbBubbleSort(int arr[],int n){
    bool swapped = false;
    for(int i= 1;i<n;i++){
        for(int j=0;j<n-i;j++){//bcz in every round one element is already getting sorted so we are not checking till the last element bcz last one is already sorted
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        //it means alrady sorted . we don't have to do swapping
        if(swapped==false) break;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]= {1,12,32,4,10,22,13,-5,30,0};
    bubbleSort(arr,10);
    printArray(arr,10);
}