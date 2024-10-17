//a function call itself is called Recursion;
//we need a base case and return is mandatory in base case  recursive relation
//base case is necessary or else we'll get stack over flow due to memory space 
//so we'll get segmentation fault;
#include<iostream>
using namespace std;


//factorial of  NUMBER
int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
//power of 2 
int powerOfTwo(int n){
    if (n==0){
        return 1;
    }
    return 2*powerOfTwo(n-1);
}
//print counting
void printCount(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    printCount(n-1);
}
int main(){
    int n;
    cin>>n;
    //int ans = powerOfTwo(n);
    //int ans = factorial(n);
    //cout<<ans<<endl;
    printCount(n);
    return 0;
}