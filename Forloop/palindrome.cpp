#include<iostream>
using namespace std;
int main(){
    int n,reverse=0,digit,temp;
    cout<<"enter the number:";
    cin>>n;
    temp=n;
    while(temp!=0){
        digit=temp%10;
        reverse=reverse*10+digit;
        temp/=10;
    }
    if(n==reverse)
       {
        cout<<"palindrome";
       }
    else
       {
        cout<<"not palindrome";
       }
    
}
