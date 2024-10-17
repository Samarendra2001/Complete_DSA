//reverse the string

#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int start =0;
    int end = n-1;
    while(start<=end){
        swap(name[start++],name[end--]);
    }
}
int getLength(char name[]){
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"this is your name "<<name<<endl;
    int length = getLength(name);
    cout<<"the length of your name is "<<length <<endl;
    reverse(name,length);
    cout<<"the reverse of your name is "<< name ;
}