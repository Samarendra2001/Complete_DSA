#include<iostream>
using namespace std;

//Q1 Fibonacci Series
//0,1,1,2,3,5,8,13,21....
//any number is formed by adding before two numbers n-1 and n-2

int fibonacci(int n){
    if(n==0||n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
// Q2 climb stairs
int countDistinctWayToStairs(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return countDistinctWayToStairs(n-1)+countDistinctWayToStairs(n-2);
}

//Q3 saY Digits
void sayDigits(int n,string arr[]){
    if(n==0){
        return ;
    }
    
    int digit = n%10;
    n=n/10;
    sayDigits(n,arr);
    cout<<arr[digit]<<" ";
}


int main(){
    string arr[10] = {"zero","One","two","three","four",
                        "five","six","seven","eight","nine"};
    int n;
    cout<<"Enter a number";
    cin>>n;
    //int ans = fibonacci(n);
    //int ans = countDistinctWayToStairs(n);
    cout<<endl<<endl<<endl;
    sayDigits(n,arr);
    cout<<endl<<endl<<endl;
    
    //cout<< ans;
    return 0;
}

