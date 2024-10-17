//check the string is pallindrome or not

#include<iostream>
using namespace std;
//convert to Lower case
char toLowerCase(char ch){
    if(ch >='a'&& ch <='z'){//this lines mean if it is a,b,c,d,....z then return as it is
        return ch;
    }else{
        char temp = ch-'A'+'a';//this means suppose character is D and D-A = 3 and a+3 = d . So this is the logic
        return temp;
    }
}
bool checkPallindrome(char arr[],int n){
    int start =0;
    int end = n-1;
    while(start<end){
        if(toLowerCase(arr[start])!=toLowerCase(arr[end])){
            return 0;
        }else{
            start++;
            end--;
        }
    }
    return 1;
}
int getLength(char arr[]){
    int count =0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout<<"enter your name ";
    cin>>name;
    cout<<"your name is "<<name;
    int length = getLength(name);
    cout<<"Palindrome or not "<<checkPallindrome(name,length);
}