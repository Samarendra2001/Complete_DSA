#include<iostream>
#include<cmath>
using namespace std;

int DecimalToBinaryMethod1(int n){
    int BinaryNo = 0;
    int i = 0;
    while(n>0){
        int Bit = n % 2;
        BinaryNo = Bit*pow(10, i++) + BinaryNo;
        n = n / 2;
    }
    return BinaryNo;
}
int main(){
    int n;
    cin>>n;
    int binary = DecimalToBinaryMethod1(n);
    cout<<binary;
}