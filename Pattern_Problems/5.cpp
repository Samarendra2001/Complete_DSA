//Half Pyramid
// *
// **
// ***
// ****
// *****
// ******

#include<iostream>
using namespace std;
int main(){
    for(int row =0;row<6;row++){
        for(int col=0;col<6;col++){ //direct for(int col =0;col<row+1;col++)
            if(row>=col){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}