//Maximum and minimum element in an array 

#include<iostream>
using namespace std;

int printMax(int arr[],int size){
    int max = INT8_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int printMin(int arr[],int size){
    int min = INT8_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min= arr[i];
        }
    }
    return min;
}
//predefined function of MAx and MIn
int printMax1(int arr[],int size){
    int maximum = INT8_MIN;
    for(int i=0;i<size;i++){
        maximum = max(maximum,arr[i]);
    }
    return maximum;
}
int printMin1(int arr[],int size){
    int minimum = INT8_MAX;
    for(int i=0;i<size;i++){
        minimum = min(minimum,arr[i]);
    }
    return minimum;
}

int main(){
    int size;
    cout<<"Enter the Size of an array"<<endl;
    cin>>size;
    int num[100];
    cout<<"enter array element"<<endl;
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
   cout<<"Maximum number is "<<" "<< printMax(num,size)<<endl;
   cout<<"Maximum number is "<<" "<< printMax(num,size)<<endl;
   cout<< "Minimum number is "<< " " <<printMin1(num,size);
   cout<< "Minimum number is "<< " " <<printMin(num,size);
}