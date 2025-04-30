#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<n/2;i++){
        if(i*i==n){
            cout<<"square root="<<i;
            break;
        }
    }
}