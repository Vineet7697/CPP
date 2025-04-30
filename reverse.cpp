#include<iostream>
using namespace std;
int main(){
    int n,digit,reverse=0;
    cout<<"enter the number:";
    cin>>n;
    while(n!=0){
        digit=n%10;
        reverse*=10;
        reverse+=digit;
        n/=10;

    }
    cout<<reverse;
}