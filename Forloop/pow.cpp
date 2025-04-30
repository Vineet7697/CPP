#include<iostream>
using namespace std;
int main(){
    int base,pow,k=1;
    cout<<"enter the base:";
    cin>>base;
    cout<<"ener the pow:";
    cin>>pow;
    for(int i=1;i<=pow;i++){
    k=k*base;
    }
    cout<<k;
}