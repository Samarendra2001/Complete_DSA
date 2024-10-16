#include<iostream>
using namespace std;

//Array is a ind of data structure in which we can stored same types of datatypes
//similar type of elements like we can store integers, number,characters 
//we can store multiple same type of elements in a single variable
//can be accessed using indexes
//it has contigious memory location 

//Array declaration
  //int a[10];

//Array Initialization
 //int number[3] = {4,3,2}

// int main(){
//     int first[3] = {2,3,4};
//     //cout<<first[1];
//     int second[4]={1,2};//after first 2 index everyting will be 0.
//     int n =4;
//     for(int i=0;i<n;i++){
//         cout<<second[i];
//     }
// }

//Array Function

// void printArray(int arr[],int size){
//     cout<<"Printing the array"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     cout<<"Printing Done";
// }

// int main(){
//     int fruits [3] = {1,2,3};
//     printArray(fruits,3);
// }

 //different types of Array
//character array

void printArray(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
    cout << endl;
}
void printArray2(const char* arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
    cout << "Printing done" << endl;
}
int main() {
    char word[] = {'H', 'e', 'l', 'l', 'o', '\0'};  // '\0' is the null terminator
    int size = sizeof(word) / sizeof(word[0]);
    
    printArray(word, size);
    const char* fruits[4] = {"apple", "guava", "orange", "banana"};  // Using string literals
    printArray2(fruits, 4);  // Passing the array to the function

}
