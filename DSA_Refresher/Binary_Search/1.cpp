//binary search can only be applied on monotonic function
//either decreasing or INcreasing

//first you have to find mid element by start index and last index divide by 2
//then compare key with the middle if key is less than middle then only search in left part again find
//middle and repeat the same things 
//and similarly if key is larger than midle then search can be done in right part and again 
//same procedure find middle and do all those tings

#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    while(start<end){
        int mid = (start+end)/2;//we can change the formula for test cases 
        //bcz suppose if start = 2^31-1 and end = 2^31-1 anf if we add these then it will be out of the range of INT.
        //so we can change this formula to ( mid = start + (end-start)/2 )
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else start = mid+1;
        //till here if control reach that means some thing has updated either start or end .
        //that's why we again cLCULted mid
        mid = (start+end)/2;
    }
    return -1;
}
   
int main(){
    int arr[5]= {2,3,4,51,22};
    cout<<binarySearch(arr,5,51);

}