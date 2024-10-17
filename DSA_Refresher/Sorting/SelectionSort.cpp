//selection Sort
//here we select the minimum one and place it in first
//And sort the next part by finding the next minimum
//get the minimum and swap it

//1st time swap happened b/w oth index and minimum
//2nd time swap happened b/w 1th index and minimum and so on

#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
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
    selectionSort(arr,10);
    printArray(arr,10);
}